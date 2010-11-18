// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v1.8.3
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// be/be_codegen.cpp:1584

#ifndef CIAO_DELREPLYHA_CONN_I_VCNLW2_H_
#define CIAO_DELREPLYHA_CONN_I_VCNLW2_H_

#include "../Base/DelReplyHAC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

namespace CIAO_DelReplyH_AMI4CCM_MyFoo_Connector_AMI4CCM_Connector_Impl
{
  typedef ACE_Atomic_Op <TAO_SYNCH_MUTEX, CORBA::UShort > Atomic_UShort;

  class  AMI4CCM_MyFooReplyHandler_i
    : public ::DelReplyH::AMI4CCM_MyFooReplyHandler
  {
  public:
    AMI4CCM_MyFooReplyHandler_i (Atomic_UShort &nr_callbacks,
                                     Atomic_UShort &nr_exceptions);
    virtual ~AMI4CCM_MyFooReplyHandler_i (void);

    virtual
    void foo (::CORBA::Long ami_return_val,
    const char * answer);

    virtual
    void foo_excep (::CCM_AMI::ExceptionHolder_ptr excep_holder);
  private:
    Atomic_UShort &nr_callbacks_;
    Atomic_UShort &nr_exceptions_;
  };
}

// TAO_IDL - Generated from
// be/be_codegen.cpp:2151


#endif /* ifndef */