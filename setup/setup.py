"""Packaging shim: all metadata lives in pyproject.toml.

The only thing pyproject.toml cannot express is that the package ships a
prebuilt extension module, so the wheel must be tagged for the building interpreter
(e.g. cp313-cp313-win_amd64) rather than py3-none-any.
"""

from setuptools import Distribution, setup


class BinaryDistribution(Distribution):
    def has_ext_modules(self):
        return True


setup(distclass=BinaryDistribution)
