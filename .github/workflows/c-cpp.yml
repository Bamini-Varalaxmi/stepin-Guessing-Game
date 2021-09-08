name: C/C++ CI

on:
  push:
    branches: [ main ]
  pull_request:
    branches: [ main ]

jobs:
  build:

    runs-on: ubuntu-latest

    steps:
    - uses: actions/checkout@v2
    - name: Install cppcheck
      run: sudo apt-get -y install cppcheck
    - name: Cppcheck code
      run: cppcheck
