[![build](https://github.com/AngryMaciek/hypercomplex/workflows/Include/badge.svg?branch=master)](https://github.com/AngryMaciek/hypercomplex/actions?query=workflow%3AInclude)
[![build](https://github.com/AngryMaciek/hypercomplex/workflows/Install/badge.svg?branch=master)](https://github.com/AngryMaciek/hypercomplex/actions?query=workflow%3AInstall)
[![build](https://github.com/AngryMaciek/hypercomplex/workflows/Catch2/badge.svg?branch=master)](https://github.com/AngryMaciek/hypercomplex/actions?query=workflow%3ACatch2)
[![codecov](https://codecov.io/gh/AngryMaciek/hypercomplex/branch/master/graph/badge.svg?token=SSKOK4XR1M)](https://codecov.io/gh/AngryMaciek/hypercomplex)
[![build](https://github.com/AngryMaciek/hypercomplex/workflows/cpplint/badge.svg?branch=master)](https://github.com/AngryMaciek/hypercomplex/actions?query=workflow%3Acpplint)
[![CodeFactor](https://www.codefactor.io/repository/github/angrymaciek/hypercomplex/badge)](https://www.codefactor.io/repository/github/angrymaciek/hypercomplex)
[![GitHub issues](https://img.shields.io/github/issues/AngryMaciek/hypercomplex)](https://github.com/AngryMaciek/hypercomplex/issues)
[![GitHub license](https://img.shields.io/github/license/AngryMaciek/hypercomplex)](https://github.com/AngryMaciek/hypercomplex/blob/master/LICENSE)

# ![Hypercomplex](img/logo.png)

Hypercomplex is a *C++* library which allows for calculations with arbitrary hypercomplex numbers from the [Cayley-Dickson algebras](https://en.wikipedia.org/wiki/Cayley%E2%80%93Dickson_construction).

The library is relatively small, it is recommended to include the header file into the main program and compile it together with the library's implementation. Alternatively, the shared library file is also provided.  
Instructions and commands on how include the library into another compilation unit are specified explicitly in the [YAML recipe](./github/workflows/include.yml) for the CI workflow.
Another [workflow recipe](./github/workflows/install.yml) dedicted to Unix-based operating systems executes a global installation of the library.

For a brief overwiev of the library's functionality please inspect the following [notebook](./example/example.ipynb).  
Full API Documentation is available at [this link](https://www.youtube.com/watch?v=dQw4w9WgXcQ).  
Please refer to the [contributing guidelines](CONTRIBUTING.md) if you are interested to contribute to this repository.  
Please mind the [code of conduct](CODE_OF_CONDUCT.md) for all interactions with the community.  
For questions or suggestions regarding the code, please use the [issue tracker](https://github.com/AngryMaciek/hypercomplex/issues).  

© 2020 Maciej Bak
