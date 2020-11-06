%module ampsend
%include "typemaps.i"
%include "carrays.i"

 %{
 /* Put header files here or function declarations like below */
#define SWIG_FILE_WITH_INIT
#include "openamp_test.h"
 %}
 
%include "openamp_test.h"