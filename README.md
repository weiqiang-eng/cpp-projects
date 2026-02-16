# Conan 2.x Setup Instructions

To set up Conan 2.x for your C++ projects, follow the steps below:

## 1. Install Conan

If you are using Homebrew, you can install Conan using the following command:

```bash
brew install conan
```

## 2. Detect Profiles

After installing Conan, you can create a default profile with the following command:

```bash
conan profile detect --name=default
```

This command will help Conan detect the current environment settings for your project.

## 3. Full Build Steps

Once you have Conan set up, follow these steps to build your project:

1. Install dependencies:
   ```bash
   conan install .
   ```

2. Build the project:
   ```bash
   conan build .
   ```

3. Package the build (if necessary):
   ```bash
   conan package .
   ```

Make sure to replace `.` with the path to your conanfile if it is located elsewhere.

## Conclusion

You are now ready to use Conan to manage dependencies in your C++ projects!