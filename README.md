# Modified SPlisHSPlasH version

This repository contains the modified SPlisHSPlasH version required for my Gymnasium pouring environment (https://github.com/carosto/RL-Water-Pouring). The modifications make it possible to take single steps in the simulator.

## Installation
Parameters set: -DCMAKE_BUILD_TYPE=Release -DUSE_PYTHON_BINDINGS=On -DUSE_AVX=Off -DUSE_OpenMP=On -DUSE_IMGUI=On

We had to turn AVX off because it caused issues that made the particles disappear.

For Linux: see https://splishsplash.readthedocs.io/en/latest/build_from_source.html, following these steps should be enough, just use this repository instead of the original one.

For Windows: 
1. Make sure that the folder path to the repository is not too deep, otherwise it cannot be found by the C compiler
2. Configure + generate the project (using cmake-gui) (set parameters from above)
3. Run “cmake --build . --config Release” in build directory
4. Run “python setup.py bdist_wheel” in Splishsplash folder
5. Run “pip install build/dist/{wheel_name}” (might have to rename the wheel to “pySPlisHSPlasH-2.12.2-cp37-none-any.whl”)
6. Update pip if there are issues
  


