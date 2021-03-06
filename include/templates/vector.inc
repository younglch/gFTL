!--------------------------------------------------------------------
! Copyright © 2017 United States Government as represented by the   |
! Administrator of the National Aeronautics and Space               |
! Administration. No copyright is claimed in the United States      |
! under Title 17, U.S. Code. All Other Rights Reserved.             |
!                                                                   |
! Licensed under the Apache License, Version 2.0.                   |
!--------------------------------------------------------------------

#include "templates/tmplbase.inc"
      private

#ifdef _vector
#  define __vector _vector
#else
#  define __vector vector
#endif
#define __container_prefix v_

#ifdef _iterator
#  define __iterator _iterator
#else
#  define __iterator __QUOTE(__vector)__QUOTE(Iterator)
#endif

#ifdef _riterator
#  define __riterator _riterator
#else
#  define __riterator __QUOTE(__vector)__QUOTE(RIterator) 
#endif

      public :: __vector
      public :: __iterator
      public :: __riterator
      public :: swap

#include "templates/type_set_use_tokens.inc"

#include "vector_decl.inc"

#include "unused.inc"
#include "error_codes.inc"

      contains

#include "vector_impl.inc"

#include "templates/type_use_tokens_undef.inc"

#undef __vector
#undef __iterator
#undef __riterator
#undef __container_prefix

#include "templates/tmpltail.inc"
#include "templates/all_macros_undefs.inc"

