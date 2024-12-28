
# Fastbench

Fastbench is a simple tool to benchmark the execution time of commands, scripts, or compiled programs. It uses C++ to measure and report the time taken for a given command to run.

## Installation

### Step 1: Clone the repository
Clone this repository to your local machine using the following command:

```bash
git clone https://github.com/luvth/fastbench
```

### Step 2: Navigate into the project directory

Change into the project directory:

```bash
cd fastbench
```

### Step 3: Set up permissions for the `setup.sh` script

Give execution permissions to the `setup.sh` script:

```bash
chmod +x setup.sh
```

### Step 4: Run the setup

Now you're ready to set up the project. Run the `setup.sh` script:

```bash
./setup.sh
```

This will complete the setup process.

## Usage

Once the setup is done, you can use the program to benchmark any command or script by running the following:

```bash
./benchmark "your-command-here"
```

For example, to benchmark the `ls` command:

```bash
./benchmark "ls -la"
```

Have fun !
