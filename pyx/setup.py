from setuptools import Extension, setup
from Cython.Build import cythonize
from Cython.Distutils import build_ext
import os
import sysconfig

class BuildExtWithoutPlatformSuffix(build_ext):
    def get_ext_filename(self, ext_name):
        filename = super().get_ext_filename(ext_name)
        return self.get_ext_filename_without_platform_suffix(filename)
    
    def get_ext_filename_without_platform_suffix(self, filename):
        name, ext = os.path.splitext(filename)
        ext_suffix = sysconfig.get_config_var('EXT_SUFFIX')

        if ext_suffix == ext:
            return filename

        ext_suffix = ext_suffix.replace(ext, '')
        idx = name.find(ext_suffix)

        if idx == -1:
            return filename
        else:
            return name[:idx] + ext

so_name = "libmyso"
extensions = [Extension(so_name,
                        ["src/*.pyx"])
              ]
setup(
    ext_modules=cythonize(extensions),
    cmdclass={'build_ext': BuildExtWithoutPlatformSuffix},
)
