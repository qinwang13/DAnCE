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
#ifndef CIAO_INTERMULTI_SENDER_EXEC_CTET9E_H_
#define CIAO_INTERMULTI_SENDER_EXEC_CTET9E_H_

#include /**/ "ace/pre.h"
#include "ace/Task.h"
#include "InterMulti_SenderEC.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include /**/ "InterMulti_Sender_exec_export.h"
#include "tao/LocalObject.h"

namespace CIAO_InterMulti_Sender_Impl
{
  typedef ACE_Atomic_Op <TAO_SYNCH_MUTEX, CORBA::UShort > Atomic_UShort;

    /// Worker threads for asynchronous invocations
    class asynch_one_generator : public virtual ACE_Task_Base
    {
    public:
      asynch_one_generator (::InterMulti::CCM_Sender_Context_ptr context,
          Atomic_UShort &nr_of_received);

      virtual int svc (void);

    private:
      ::InterMulti::CCM_Sender_Context_var context_;
      Atomic_UShort &nr_of_received_;
    };

    class asynch_two_generator : public virtual ACE_Task_Base
    {
    public:
      asynch_two_generator (::InterMulti::CCM_Sender_Context_ptr context,
          Atomic_UShort &nr_of_received);

      virtual int svc (void);

    private:
      ::InterMulti::CCM_Sender_Context_var context_;
      Atomic_UShort &nr_of_received_;

    };

    class asynch_three_generator : public virtual ACE_Task_Base
    {
    public:
      asynch_three_generator (::InterMulti::CCM_Sender_Context_ptr context,
          Atomic_UShort &nr_of_received);

      virtual int svc (void);

    private:
      ::InterMulti::CCM_Sender_Context_var context_;
      Atomic_UShort &nr_of_received_;
    };

    /// Worker threads for synchronous invocations
    class synch_one_generator : public virtual ACE_Task_Base
    {
    public:
      synch_one_generator (::InterMulti::CCM_Sender_Context_ptr context);
      virtual int svc (void);

    private:
      ::InterMulti::CCM_Sender_Context_var context_;
    };

    class synch_two_generator : public virtual ACE_Task_Base
    {
    public:
      synch_two_generator (::InterMulti::CCM_Sender_Context_ptr context);
      virtual int svc (void);

    private:
      ::InterMulti::CCM_Sender_Context_var context_;

    };
      class synch_three_generator : public virtual ACE_Task_Base
    {
    public:
      synch_three_generator (::InterMulti::CCM_Sender_Context_ptr context);
      virtual int svc (void);

    private:
      ::InterMulti::CCM_Sender_Context_var context_;

    };

  /**
   * Component Executor Implementation Class: Sender_exec_i
   */

  class Sender_exec_i
    : public virtual Sender_Exec,
      public virtual ::CORBA::LocalObject
  {
  public:
    Sender_exec_i (void);
    virtual ~Sender_exec_i (void);

    //@{
    /** Supported operations and attributes. */

    //@}

    //@{
    /** Component attributes and port operations. */
    //@}

    //@{
    /** Operations from Components::SessionComponent. */
    virtual void set_session_context (::Components::SessionContext_ptr ctx);
    virtual void configuration_complete (void);
    virtual void ccm_activate (void);
    virtual void ccm_passivate (void);
    virtual void ccm_remove (void);
    //@}

    //@{
    /** User defined public operations. */

    //@}

  private:
    ::InterMulti::CCM_Sender_Context_var ciao_context_;

    //@{
    /** Component attributes. */
    //@}

    //@{
    /** User defined members. */
    asynch_one_generator* asynch_one_gen;
    synch_one_generator* synch_one_gen;
    asynch_two_generator* asynch_two_gen;
    asynch_three_generator* asynch_three_gen;
    synch_three_generator* synch_three_gen;
    Atomic_UShort nr_of_received_;
    //@}

    //@{
    /** User defined private operations. */

    //@}
  };

  extern "C" INTERMULTI_SENDER_EXEC_Export ::Components::EnterpriseComponent_ptr
  create_InterMulti_Sender_Impl (void);
}

#include /**/ "ace/post.h"

#endif /* ifndef */
