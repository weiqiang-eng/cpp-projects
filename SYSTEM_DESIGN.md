# System Design Interview Plan for Engineering Managers

## How EM System Design Differs from IC

EM system design interviews emphasize **breadth over depth**:
- You're expected to drive the conversation, clarify requirements, and make trade-off decisions
- Focus on **architecture, scalability, and operational concerns** — not low-level code
- Interviewers evaluate your ability to **lead a technical discussion**, not just draw boxes
- You should naturally bring up **team structure, oncall, rollout strategy, and monitoring**

---

## Framework (Use This Structure in Every Interview)

### 1. Requirements & Scoping (5 min)
- Clarify functional requirements (what does it do?)
- Clarify non-functional requirements (scale, latency, availability, consistency)
- Identify core use cases — don't try to design everything
- **EM angle:** Ask about team size, timeline, build-vs-buy constraints

### 2. High-Level Design (10 min)
- Draw the main components (clients, services, databases, caches, queues)
- Identify the API contract (REST/gRPC, key endpoints)
- Choose the data model (SQL vs NoSQL, key entities)

### 3. Deep Dive (15–20 min)
- Drill into 1–2 critical components
- Discuss scaling strategies (sharding, replication, partitioning)
- Address failure modes and recovery
- **EM angle:** Discuss how you'd decompose work across teams

### 4. Operational Concerns (5–10 min)
- Monitoring, alerting, SLOs
- Deployment and rollout strategy (canary, feature flags)
- Oncall and incident response
- **EM angle:** This is where you differentiate from IC candidates

---

## Practice Plan — 20 Problems in 4 Phases

### Phase 1 — Fundamentals (5 problems)
> Core building blocks that appear in almost every design. Start here.

| # | Problem | Key Concepts | Why It Matters |
|---|---------|-------------|----------------|
| 1 | **Design a URL Shortener** (TinyURL) | Hashing, key-value store, read-heavy workload | Simplest end-to-end system; great for practicing the framework |
| 2 | **Design a Rate Limiter** | Token bucket, sliding window, distributed counters | Appears as a component in many other designs |
| 3 | **Design a Key-Value Store** | Consistent hashing, replication, quorum reads/writes | Foundational distributed systems knowledge |
| 4 | **Design a Notification System** | Push/pull, message queues, fan-out, delivery guarantees | Tests async architecture and reliability |
| 5 | **Design a Cache System** (like Memcached/Redis) | Eviction policies, cache-aside/write-through, consistency | Caching comes up in every design discussion |

### Phase 2 — Core Applications (5 problems)
> The most frequently asked questions. High ROI.

| # | Problem | Key Concepts | Why It Matters |
|---|---------|-------------|----------------|
| 6 | **Design a Chat System** (WhatsApp/Slack) | WebSockets, message queues, presence, delivery status | Real-time systems, connection management |
| 7 | **Design a News Feed** (Twitter/Facebook) | Fan-out on write vs read, ranking, caching timelines | Classic push/pull trade-off discussion |
| 8 | **Design a File Storage System** (Dropbox/Google Drive) | Chunking, dedup, sync conflicts, metadata service | Distributed storage, consistency challenges |
| 9 | **Design a Search Autocomplete** | Trie, pre-computation, ranking, caching | Data structures at scale, latency optimization |
| 10 | **Design an API Gateway** | Routing, auth, rate limiting, circuit breaker | Ties together many microservice concepts |

### Phase 3 — Data-Intensive Systems (5 problems)
> Tests deeper distributed systems knowledge. Common at senior EM levels.

| # | Problem | Key Concepts | Why It Matters |
|---|---------|-------------|----------------|
| 11 | **Design a Web Crawler** | BFS, politeness, dedup, distributed task queue | Distributed coordination, scale |
| 12 | **Design a Metrics/Monitoring System** (Datadog) | Time-series DB, aggregation, alerting pipelines | Operational maturity — very EM-relevant |
| 13 | **Design a Distributed Message Queue** (Kafka) | Partitioning, consumer groups, ordering, at-least-once | Core infrastructure component |
| 14 | **Design a Unique ID Generator** (Snowflake) | Clock sync, coordination-free, ordering guarantees | Distributed systems fundamentals |
| 15 | **Design a Top-K / Trending System** | Count-min sketch, heap, streaming aggregation | Real-time analytics at scale |

### Phase 4 — Complex Systems (5 problems)
> Harder, multi-service designs. Good for Staff+ EM or Big Tech interviews.

| # | Problem | Key Concepts | Why It Matters |
|---|---------|-------------|----------------|
| 16 | **Design YouTube/Netflix** (Video Platform) | CDN, transcoding pipeline, adaptive streaming | Large-scale media delivery |
| 17 | **Design Uber/Lyft** (Ride Sharing) | Geo-indexing, matching, real-time location, ETA | Location-based services, real-time systems |
| 18 | **Design Google Maps** | Graph algorithms, tile serving, routing, caching | Geo-spatial data at scale |
| 19 | **Design a Payment System** (Stripe) | Idempotency, saga pattern, ledger, reconciliation | Financial systems, exactly-once semantics |
| 20 | **Design a CI/CD Pipeline** (GitHub Actions) | Task scheduling, DAG execution, artifact storage, scaling workers | Very relevant to EM day-to-day |

---

## Key Concepts Cheat Sheet

### Scaling Patterns
| Pattern | When to Use |
|---------|------------|
| **Horizontal scaling** | Stateless services, read replicas |
| **Sharding** | Database is the bottleneck, data is partitionable |
| **Caching** | Read-heavy workloads, expensive computations |
| **CDN** | Static content, geographically distributed users |
| **Message queues** | Decouple producers/consumers, absorb traffic spikes |
| **CQRS** | Very different read/write patterns |

### Database Selection
| Choose | When |
|--------|------|
| **SQL (Postgres/MySQL)** | ACID needed, complex queries, relational data |
| **NoSQL document (MongoDB)** | Flexible schema, denormalized reads |
| **NoSQL wide-column (Cassandra)** | High write throughput, time-series-like |
| **Redis** | Caching, sessions, leaderboards, pub/sub |
| **Elasticsearch** | Full-text search, log aggregation |
| **Time-series DB (InfluxDB)** | Metrics, monitoring, IoT data |

### Consistency & Availability Trade-offs
| Model | Guarantee | Use Case |
|-------|-----------|----------|
| **Strong consistency** | Reads always see latest write | Payments, inventory |
| **Eventual consistency** | Reads may be stale briefly | Social feeds, analytics |
| **Causal consistency** | Respects causal ordering | Chat messages |

### Estimation Cheat Sheet
| Metric | Quick Reference |
|--------|----------------|
| QPS for 1M DAU | ~12 QPS avg, ~100 QPS peak (assume 10x) |
| 1 KB × 1M = | 1 GB |
| 1 KB × 1B = | 1 TB |
| SSD random read | ~100 μs |
| Network round trip (same DC) | ~0.5 ms |
| Network round trip (cross-region) | ~50–150 ms |

---

## EM-Specific Topics to Weave In

During every system design discussion, look for natural moments to bring up:

### Team & Org Design
- How would you split this across teams? (2-pizza teams)
- What are the ownership boundaries?
- Where do you need platform teams vs product teams?

### Operational Excellence
- What SLOs would you set? (e.g., p99 latency < 200ms, 99.9% availability)
- How would you monitor this system? What dashboards?
- What does the oncall rotation look like?
- What are the most likely pages and how do you mitigate them?

### Rollout & Risk
- How do you roll this out safely? (canary → 1% → 10% → 100%)
- What feature flags do you need?
- What's the rollback plan?
- How do you handle data migrations?

### Trade-offs & Prioritization
- What's the MVP vs the full vision?
- What would you build first with a team of 4 engineers?
- What technical debt are you accepting and why?
- Build vs buy for each component?

---

## Practice Schedule Suggestion

| Week | Focus | Problems |
|------|-------|----------|
| **Week 1** | Framework + Fundamentals | #1–5, practice with a timer (45 min each) |
| **Week 2** | Core Applications | #6–10, practice explaining out loud |
| **Week 3** | Data-Intensive + Review | #11–15, redo any weak ones from weeks 1–2 |
| **Week 4** | Complex Systems + Mock | #16–20, do 2–3 mock interviews with a friend |

### How to Practice Solo
1. Set a **45-minute timer**
2. Spend 5 min on requirements (write them down)
3. Draw the high-level design on paper or whiteboard app
4. Pick 1–2 components to deep dive
5. End with operational concerns
6. After the timer: review what you missed, look up reference designs

### Recommended Resources
- *Designing Data-Intensive Applications* by Martin Kleppmann (the bible)
- *System Design Interview* by Alex Xu (Vol 1 & 2)
- ByteByteGo newsletter and YouTube channel
- The Morning Paper (for distributed systems papers)
