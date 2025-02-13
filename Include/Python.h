// Entry point of the Python C API.
// C extensions should only #include <Python.h>, and not include directly
// the other Python header files included by <Python.h>.

#ifndef Py_PYTHON_H
#define Py_PYTHON_H

// Since this is a "meta-include" file, "#ifdef __cplusplus / extern "C" {"
// is not needed.


// Include Python header files
#include "patchlevel.h"
#include "pyconfig.h"
#include "pymacconfig.h"


// Include standard header files
#include <assert.h>               // assert()
#include <ctype.h>                // tolower()
#include <inttypes.h>             // uintptr_t
#include <limits.h>               // INT_MAX
#include <stdarg.h>               // va_list
#include <wchar.h>                // wchar_t
#ifdef HAVE_STDDEF_H
#  include <stddef.h>             // size_t
#endif
#ifndef MS_WINDOWS
#  include <unistd.h>             // sysconf()
#endif

// errno.h, stdio.h, stdlib.h and string.h headers are no longer used by Python
// headers, but kept for backward compatibility (no introduce new compiler
// warnings). They are not included by the limited C API version 3.11 and
// above.
#if !defined(Py_LIMITED_API) || Py_LIMITED_API+0 < 0x030b0000
#  include <errno.h>              // errno
#  include <stdio.h>              // FILE*
#  include <stdlib.h>             // getenv()
#  include <string.h>             // memcpy()
#endif


// Include Python header files
#include "pyport.h"
#include "pymacro.h"
#include "pymath.h"
#include "pymem.h"
#include "pytypedefs.h"
#include "pybuffer.h"
#include "pystats.h"
#include "object.h"
#include "objimpl.h"
#include "typeslots.h"
#include "pyhash.h"
#include "cpython/pydebug.h"
#include "bytearrayobject.h"
#include "bytesobject.h"
#include "unicodeobject.h"
#include "longobject.h"
#include "cpython/longintrepr.h"
#include "boolobject.h"
#include "floatobject.h"
#include "complexobject.h"
#include "rangeobject.h"
#include "memoryobject.h"
#include "tupleobject.h"
#include "listobject.h"
#include "dictobject.h"
#include "cpython/odictobject.h"
#include "enumobject.h"
#include "setobject.h"
#include "methodobject.h"
#include "moduleobject.h"
#include "cpython/funcobject.h"
#include "cpython/classobject.h"
#include "fileobject.h"
#include "pycapsule.h"
#include "cpython/code.h"
#include "pyframe.h"
#include "traceback.h"
#include "sliceobject.h"
#include "cpython/cellobject.h"
#include "iterobject.h"
#include "cpython/initconfig.h"
#include "pystate.h"
#include "cpython/genobject.h"
#include "descrobject.h"
#include "genericaliasobject.h"
#include "warnings.h"
#include "weakrefobject.h"
#include "structseq.h"
#include "cpython/picklebufobject.h"
#include "codecs.h"
#include "pyerrors.h"
#include "pythread.h"
#include "cpython/context.h"
#include "modsupport.h"
#include "compile.h"
#include "pythonrun.h"
#include "pylifecycle.h"
#include "ceval.h"
#include "sysmodule.h"
#include "osmodule.h"
#include "intrcheck.h"
#include "import.h"
#include "abstract.h"
#include "bltinmodule.h"
#include "cpython/pyctype.h"
#include "pystrtod.h"
#include "pystrcmp.h"
#include "fileutils.h"
#include "cpython/pyfpe.h"
#include "cpython/tracemalloc.h"
#include "cpython/optimizer.h"

#endif /* !Py_PYTHON_H */
