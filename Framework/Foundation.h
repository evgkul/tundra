// For conditions of distribution and use, see copyright notice in license.txt

#ifndef incl_Foundation_h
#define incl_Foundation_h

#include "ForwardDefines.h"
#include "Framework.h"
#include "Profiler.h"

/** \defgroup Foundation_group Foundation Client Interface
    \copydoc Foundation
*/

/// Foundation is the main helper in your quest to create new or improved functionality for the realXtend viewer.
/** To use all the services offered by the foundation, simply include "Foundation.h" in your own module.

    - ModuleManager is there to help you create new pluggable modules for the
      viewer. It works mostly transparently so when you create a new module you
      don't need to worry about it, it does most of the worrying for you!
    For creating new modules, see \ref ModuleArchitecture "Module architecture".

    - ComponentManager handles extending scene objects with new functionality.
      When you create a new component for an entity, ComponentManager makes sure
      the component is usable by any module in the viewer, including the ones
      you create yourself.
    For creating new components, see ComponentManager.

    - Application provides convenient shortcuts for accessing application
      specific configuration options, such as the name of the application.

    - Framework class is the entry point for the viewer. It contains the main
    loop and is responsible for all the other parts of the foundation.
*/

#endif


