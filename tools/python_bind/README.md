# The python binding API for wheel_bind

# Building the Wheel

To build wheels for all supported Python versions on this platform, use the following commands:

```bash
pip3 install cibuildwheel
cibuildwheel ./tools/python_bind --no-deps
```

To build a wheel for the local environment, run:

```bash
source ~/.graphscope_env
cd tools/python_bind
export DEBUG=1
python3 setup.py build_ext
python3 setup.py dist_wheel
pip3 install dist/*
```

# Development Mode Setup

In development mode, wheels are not built or installed. Instead, the required dynamic library is built and copied to `tools/python_bind/build`. Any changes made to the Python codebase will take effect immediately, allowing for seamless reloading of files.

```bash
make develop
# run tests

python3 -m pytest tests/test_a.py
```

or 
```bash
python3 setup.py build_ext --inplace --build-temp=build
```