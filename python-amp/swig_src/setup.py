from distutils.core import setup, Extension
 
 
ampsend_module = Extension( '_ampsend' ,
                            sources=[ 'openamp_test_wrap.c' ,  'openamp_test.c' ],
                            )
 
setup (name =  'ampsend' ,
        version =  '0.1' ,
        author      =  "SWIG Docs" ,
        description =  "" "Simple swig example from docs" "" ,
        ext_modules = [ampsend_module],
        py_modules = [ "ampsend" ],
        )