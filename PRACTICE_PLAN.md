# LeetCode Hot 100 – EM Interview Practice Plan

## Strategy

EM coding interviews typically test **medium-level** problems with emphasis on:
- Clean, readable code and clear communication
- Demonstrating solid CS fundamentals (not competitive-programming tricks)
- Hash maps, arrays, trees, graphs, and basic DP cover ~80% of questions

The plan is split into 5 phases. **Phases 1–3 are highest ROI** — if time is short, stop there.
Aim for ~45 min per problem (mimic real interview pacing).

---

## Phase 1 — Warm-up & Fundamentals (15 problems)
> Goal: Rebuild muscle memory. Easy/easy-medium. One pattern per problem.

| #  | Problem | File | Pattern |
|----|---------|------|---------|
| 1  | #1 Two Sum | `arrays/001_two_sum` | Hash map lookup |
| 2  | #136 Single Number | `bit_manipulation/136_single-number` | XOR |
| 3  | #206 Reverse Linked List | `linked_list/206_reverse-linked-list` | Pointer manipulation |
| 4  | #21 Merge Two Sorted Lists | `linked_list/021_merge-two-sorted-lists` | Merge pattern |
| 5  | #20 Valid Parentheses | `stack/020_valid-parentheses` | Stack basics |
| 6  | #70 Climbing Stairs | `dp/070_climbing-stairs` | Intro DP |
| 7  | #104 Maximum Depth of Binary Tree | `trees/104_maximum-depth-of-binary-tree` | Tree DFS |
| 8  | #226 Invert Binary Tree | `trees/226_invert-binary-tree` | Tree recursion |
| 9  | #121 Best Time to Buy and Sell Stock | `greedy/121_best-time-to-buy-and-sell-stock` | Greedy / running min |
| 10 | #283 Move Zeroes | `two_pointers/283_move-zeroes` | Two pointers (easy) |
| 11 | #169 Majority Element | `arrays/169_majority-element` | Boyer-Moore |
| 12 | #35 Search Insert Position | `binary_search/035_search-insert-position` | Binary search basics |
| 13 | #118 Pascal's Triangle | `dp/118_pascals-triangle` | Simulation |
| 14 | #338 Counting Bits | `bit_manipulation/338_counting-bits` | DP + bit |
| 15 | #141 Linked List Cycle | `linked_list/141_linked-list-cycle` | Fast/slow pointers |

---

## Phase 2 — Core Patterns (25 problems)
> Goal: Cover every major pattern at medium difficulty. **This is the sweet spot for EM interviews.**

| #  | Problem | File | Pattern |
|----|---------|------|---------|
| 16 | #49 Group Anagrams | `arrays/049_group-anagrams` | Hash map grouping |
| 17 | #238 Product of Array Except Self | `arrays/238_product-of-array-except-self` | Prefix/suffix |
| 18 | #53 Maximum Subarray | `arrays/053_maximum-subarray` | Kadane's algorithm |
| 19 | #3 Longest Substring Without Repeating | `sliding_window/003_longest-substring-without-repeating-characters` | Sliding window |
| 20 | #11 Container With Most Water | `two_pointers/011_container-with-most-water` | Two pointers |
| 21 | #15 3Sum | `two_pointers/015_3sum` | Sort + two pointers |
| 22 | #56 Merge Intervals | `intervals/056_merge-intervals` | Interval merge |
| 23 | #102 Binary Tree Level Order | `trees/102_binary-tree-level-order-traversal` | BFS |
| 24 | #98 Validate BST | `trees/098_validate-binary-search-tree` | BST property / inorder |
| 25 | #200 Number of Islands | `graphs/200_number-of-islands` | Graph DFS/BFS |
| 26 | #207 Course Schedule | `graphs/207_course-schedule` | Topological sort |
| 27 | #33 Search in Rotated Sorted Array | `binary_search/033_search-in-rotated-sorted-array` | Modified binary search |
| 28 | #198 House Robber | `dp/198_house-robber` | Linear DP |
| 29 | #322 Coin Change | `dp/322_coin-change` | Unbounded knapsack |
| 30 | #78 Subsets | `backtracking/078_subsets` | Backtracking template |
| 31 | #46 Permutations | `backtracking/046_permutations` | Backtracking |
| 32 | #155 Min Stack | `stack/155_min-stack` | Design / stack |
| 33 | #739 Daily Temperatures | `stack/739_daily-temperatures` | Monotonic stack |
| 34 | #347 Top K Frequent Elements | `heap/347_top-k-frequent-elements` | Heap / bucket sort |
| 35 | #215 Kth Largest Element | `heap/215_kth-largest-element-in-an-array` | Quickselect / heap |
| 36 | #543 Diameter of Binary Tree | `trees/543_diameter-of-binary-tree` | Tree DFS + global max |
| 37 | #236 Lowest Common Ancestor | `trees/236_lowest-common-ancestor-of-a-binary-tree` | LCA pattern |
| 38 | #994 Rotting Oranges | `graphs/994_rotting-oranges` | Multi-source BFS |
| 39 | #189 Rotate Array | `arrays/189_rotate-array` | In-place reversal |
| 40 | #19 Remove Nth From End | `linked_list/019_remove-nth-node-from-end-of-list` | Two pointers on list |

---

## Phase 3 — Intermediate (25 problems)
> Goal: Solidify patterns, add breadth. Still very likely in EM interviews.

| #  | Problem | File | Pattern |
|----|---------|------|---------|
| 41 | #128 Longest Consecutive Sequence | `arrays/128_longest-consecutive-sequence` | Hash set |
| 42 | #560 Subarray Sum Equals K | `arrays/560_subarray-sum-equals-k` | Prefix sum + hash |
| 43 | #438 Find All Anagrams | `sliding_window/438_find-all-anagrams-in-a-string` | Fixed-size window |
| 44 | #74 Search a 2D Matrix | `binary_search/074_search-a-2d-matrix` | Binary search on matrix |
| 45 | #153 Find Min in Rotated Array | `binary_search/153_find-minimum-in-rotated-sorted-array` | Binary search variant |
| 46 | #62 Unique Paths | `dp/062_unique-paths` | Grid DP |
| 47 | #64 Minimum Path Sum | `dp/064_minimum-path-sum` | Grid DP |
| 48 | #300 Longest Increasing Subsequence | `dp/300_longest-increasing-subsequence` | Classic DP / patience |
| 49 | #139 Word Break | `dp/139_word-break` | DP + hash set |
| 50 | #5 Longest Palindromic Substring | `dp/005_longest-palindromic-substring` | Expand around center |
| 51 | #1143 Longest Common Subsequence | `dp/1143_longest-common-subsequence` | 2D DP |
| 52 | #39 Combination Sum | `backtracking/039_combination-sum` | Backtracking + pruning |
| 53 | #17 Letter Combinations | `backtracking/017_letter-combinations-of-a-phone-number` | Backtracking |
| 54 | #22 Generate Parentheses | `backtracking/022_generate-parentheses` | Backtracking |
| 55 | #199 Binary Tree Right Side View | `trees/199_binary-tree-right-side-view` | BFS / DFS |
| 56 | #230 Kth Smallest in BST | `trees/230_kth-smallest-element-in-a-bst` | Inorder traversal |
| 57 | #94 Binary Tree Inorder | `trees/094_binary-tree-inorder-traversal` | Iterative traversal |
| 58 | #101 Symmetric Tree | `trees/101_symmetric-tree` | Mirror recursion |
| 59 | #208 Implement Trie | `graphs/208_implement-trie-prefix-tree` | Trie design |
| 60 | #146 LRU Cache | `linked_list/146_lru-cache` | Design / hash + dll |
| 61 | #48 Rotate Image | `matrix/048_rotate-image` | Matrix manipulation |
| 62 | #54 Spiral Matrix | `matrix/054_spiral-matrix` | Simulation |
| 63 | #73 Set Matrix Zeroes | `matrix/073_set-matrix-zeroes` | In-place marking |
| 64 | #55 Jump Game | `greedy/055_jump-game` | Greedy |
| 65 | #394 Decode String | `stack/394_decode-string` | Stack parsing |

---

## Phase 4 — Advanced Medium (20 problems)
> Goal: Depth on harder patterns. Good to know, but less likely for EM rounds.

| #  | Problem | File | Pattern |
|----|---------|------|---------|
| 66 | #75 Sort Colors | `arrays/075_sort-colors` | Dutch national flag |
| 67 | #287 Find the Duplicate | `arrays/287_find-the-duplicate-number` | Floyd's cycle |
| 68 | #31 Next Permutation | `arrays/031_next-permutation` | Array manipulation |
| 69 | #152 Maximum Product Subarray | `dp/152_maximum-product-subarray` | DP with min/max |
| 70 | #416 Partition Equal Subset Sum | `dp/416_partition-equal-subset-sum` | 0/1 knapsack |
| 71 | #647 Palindromic Substrings | `dp/647_palindromic-substrings` | Expand around center |
| 72 | #221 Maximal Square | `dp/221_maximal-square` | 2D DP |
| 73 | #279 Perfect Squares | `dp/279_perfect-squares` | BFS / DP |
| 74 | #96 Unique BSTs | `dp/096_unique-binary-search-trees` | Catalan number |
| 75 | #337 House Robber III | `dp/337_house-robber-iii` | Tree DP |
| 76 | #79 Word Search | `backtracking/079_word-search` | DFS on grid |
| 77 | #131 Palindrome Partitioning | `backtracking/131_palindrome-partitioning` | Backtracking + DP |
| 78 | #105 Construct Tree from Preorder/Inorder | `trees/105_construct-binary-tree-from-preorder-and-inorder-traversal` | Divide & conquer |
| 79 | #114 Flatten Binary Tree | `trees/114_flatten-binary-tree-to-linked-list` | Morris-like |
| 80 | #437 Path Sum III | `trees/437_path-sum-iii` | Prefix sum on tree |
| 81 | #108 Sorted Array to BST | `trees/108_convert-sorted-array-to-binary-search-tree` | Divide & conquer |
| 82 | #142 Linked List Cycle II | `linked_list/142_linked-list-cycle-ii` | Floyd's algorithm |
| 83 | #234 Palindrome Linked List | `linked_list/234_palindrome-linked-list` | Fast/slow + reverse |
| 84 | #160 Intersection of Two Lists | `linked_list/160_intersection-of-two-linked-lists` | Two pointers |
| 85 | #148 Sort List | `linked_list/148_sort-list` | Merge sort on list |

---

## Phase 5 — Hard Problems (25 problems)
> Goal: Only if you have time and want extra confidence. Unlikely in EM interviews.

| #  | Problem | File | Pattern |
|----|---------|------|---------|
| 86  | #42 Trapping Rain Water | `two_pointers/042_trapping-rain-water` | Two pointers / stack |
| 87  | #76 Minimum Window Substring | `sliding_window/076_minimum-window-substring` | Sliding window (hard) |
| 88  | #239 Sliding Window Maximum | `sliding_window/239_sliding-window-maximum` | Monotonic deque |
| 89  | #84 Largest Rectangle in Histogram | `stack/084_largest-rectangle-in-histogram` | Monotonic stack |
| 90  | #72 Edit Distance | `dp/072_edit-distance` | 2D DP |
| 91  | #32 Longest Valid Parentheses | `dp/032_longest-valid-parentheses` | Stack / DP |
| 92  | #312 Burst Balloons | `dp/312_burst-balloons` | Interval DP |
| 93  | #10 Regular Expression Matching | `dp/010_regular-expression-matching` | 2D DP |
| 94  | #4 Median of Two Sorted Arrays | `binary_search/004_median-of-two-sorted-arrays` | Binary search (hard) |
| 95  | #34 Find First and Last Position | `binary_search/034_find-first-and-last-position-of-element-in-sorted-array` | Binary search bounds |
| 96  | #23 Merge k Sorted Lists | `linked_list/023_merge-k-sorted-lists` | Heap + merge |
| 97  | #25 Reverse Nodes in k-Group | `linked_list/025_reverse-nodes-in-k-group` | List manipulation |
| 98  | #138 Copy List with Random Pointer | `linked_list/138_copy-list-with-random-pointer` | Hash map / interleave |
| 99  | #124 Binary Tree Max Path Sum | `trees/124_binary-tree-maximum-path-sum` | Tree DP |
| 100 | #51 N-Queens | `backtracking/051_n-queens` | Backtracking (hard) |
| 101 | #295 Find Median from Data Stream | `heap/295_find-median-from-data-stream` | Two heaps |
| 102 | #240 Search a 2D Matrix II | `matrix/240_search-a-2d-matrix-ii` | Staircase search |
| 103 | #41 First Missing Positive | `arrays/041_first-missing-positive` | Index as hash |
| 104 | #45 Jump Game II | `greedy/045_jump-game-ii` | BFS / greedy |
| 105 | #301 Remove Invalid Parentheses | `strings/301_remove-invalid-parentheses` | BFS / backtracking |
| 106 | #399 Evaluate Division | `graphs/399_evaluate-division` | Graph DFS / union-find |
| 107 | #48 Number of Provinces | `graphs/048_number-of-provinces` | Union-find / DFS |
| 108 | #301 Clone Graph | `graphs/301_clone-graph` | BFS + hash map |
| 109 | #763 Partition Labels | `greedy/763_partition-labels` | Greedy intervals |
| 110 | #76 Implement strStr() | `strings/076_find-the-index-of-the-first-occurrence-in-a-string` | KMP / string match |

---

## Tips for EM Coding Interviews
- **Talk through your approach** before coding — interviewers weight communication heavily
- **Start with brute force**, then optimize — shows structured thinking
- **Phases 1–3 (65 problems) cover ~95%** of what you'll see in EM coding rounds
- Practice at **45 min/problem** to match real interview pacing
- Focus on writing **clean, bug-free code** over clever optimizations

## Quick Build & Run

```bash
cd build
cmake --build . --target <target_name>     # e.g. dp_070_climbing-stairs
./leetcode/<target_name>                    # run it
```
