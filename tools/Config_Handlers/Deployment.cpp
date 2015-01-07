/* 
 * This code was generated by the XML Schema Compiler.
 *
 * Changes made to this code will most likely be overwritten
 * when the handlers are recompiled.
 *
 * If you find errors or feel that there are bugfixes to be made,
 * please contact the current XSC maintainer:
 *             Will Otte <wotte@dre.vanderbilt.edu>
 */

// Fix for Borland compilers, which seem to have a broken
// <string> include.
#ifdef __BORLANDC__
# include <string.h>
#endif

#include "Deployment.hpp"

namespace DAnCE
{
  namespace Config_Handlers
  {
  }
}

namespace DAnCE
{
  namespace Config_Handlers
  {
  }
}

namespace DAnCE
{
  namespace Config_Handlers
  {
    namespace reader
    {
      ::DAnCE::Config_Handlers::Domain
      domain (xercesc::DOMDocument const* d)
      {
        //Initiate our Singleton as an ACE_TSS object (ensures thread
        //specific storage
        ID_Map::TSS_ID_Map* TSS_ID_Map (ACE_Singleton<ID_Map::TSS_ID_Map, ACE_Null_Mutex>::instance());


        ::XSCRT::XML::Element< ACE_TCHAR > e (d->getDocumentElement ());
        if (e.name () == ACE_TEXT("domain"))
        {
          ::DAnCE::Config_Handlers::Domain r (e);

          (*TSS_ID_Map)->resolve_idref();

          return r;
        }

        else
        {
          throw 1;
        }
      }
    }

    namespace reader
    {
      ::DAnCE::Config_Handlers::deploymentPlan
      DeploymentPlan (xercesc::DOMDocument const* d)
      {
        //Initiate our Singleton as an ACE_TSS object (ensures thread
        //specific storage
        ID_Map::TSS_ID_Map* TSS_ID_Map (ACE_Singleton<ID_Map::TSS_ID_Map, ACE_Null_Mutex>::instance());


        ::XSCRT::XML::Element< ACE_TCHAR > e (d->getDocumentElement ());
        if (e.name () == ACE_TEXT("DeploymentPlan"))
        {
          ::DAnCE::Config_Handlers::deploymentPlan r (e);

          (*TSS_ID_Map)->resolve_idref();

          return r;
        }

        else
        {
          throw 1;
        }
      }
    }

    namespace reader
    {
      ::DAnCE::Config_Handlers::ImplementationArtifactDescription
      implementationArtifactDescription (xercesc::DOMDocument const* d)
      {
        //Initiate our Singleton as an ACE_TSS object (ensures thread
        //specific storage
        ID_Map::TSS_ID_Map* TSS_ID_Map (ACE_Singleton<ID_Map::TSS_ID_Map, ACE_Null_Mutex>::instance());


        ::XSCRT::XML::Element< ACE_TCHAR > e (d->getDocumentElement ());
        if (e.name () == ACE_TEXT("implementationArtifactDescription"))
        {
          ::DAnCE::Config_Handlers::ImplementationArtifactDescription r (e);

          (*TSS_ID_Map)->resolve_idref();

          return r;
        }

        else
        {
          throw 1;
        }
      }
    }

    namespace reader
    {
      ::DAnCE::Config_Handlers::ComponentInterfaceDescription
      componentInterfaceDescription (xercesc::DOMDocument const* d)
      {
        //Initiate our Singleton as an ACE_TSS object (ensures thread
        //specific storage
        ID_Map::TSS_ID_Map* TSS_ID_Map (ACE_Singleton<ID_Map::TSS_ID_Map, ACE_Null_Mutex>::instance());


        ::XSCRT::XML::Element< ACE_TCHAR > e (d->getDocumentElement ());
        if (e.name () == ACE_TEXT("componentInterfaceDescription"))
        {
          ::DAnCE::Config_Handlers::ComponentInterfaceDescription r (e);

          (*TSS_ID_Map)->resolve_idref();

          return r;
        }

        else
        {
          throw 1;
        }
      }
    }

    namespace reader
    {
      ::DAnCE::Config_Handlers::ComponentImplementationDescription
      componentImplementationDescription (xercesc::DOMDocument const* d)
      {
        //Initiate our Singleton as an ACE_TSS object (ensures thread
        //specific storage
        ID_Map::TSS_ID_Map* TSS_ID_Map (ACE_Singleton<ID_Map::TSS_ID_Map, ACE_Null_Mutex>::instance());


        ::XSCRT::XML::Element< ACE_TCHAR > e (d->getDocumentElement ());
        if (e.name () == ACE_TEXT("componentImplementationDescription"))
        {
          ::DAnCE::Config_Handlers::ComponentImplementationDescription r (e);

          (*TSS_ID_Map)->resolve_idref();

          return r;
        }

        else
        {
          throw 1;
        }
      }
    }

    namespace reader
    {
      ::DAnCE::Config_Handlers::ComponentPackageDescription
      componentPackageDescription (xercesc::DOMDocument const* d)
      {
        //Initiate our Singleton as an ACE_TSS object (ensures thread
        //specific storage
        ID_Map::TSS_ID_Map* TSS_ID_Map (ACE_Singleton<ID_Map::TSS_ID_Map, ACE_Null_Mutex>::instance());


        ::XSCRT::XML::Element< ACE_TCHAR > e (d->getDocumentElement ());
        if (e.name () == ACE_TEXT("componentPackageDescription"))
        {
          ::DAnCE::Config_Handlers::ComponentPackageDescription r (e);

          (*TSS_ID_Map)->resolve_idref();

          return r;
        }

        else
        {
          throw 1;
        }
      }
    }

    namespace reader
    {
      ::DAnCE::Config_Handlers::PackageConfiguration
      packageConfiguration (xercesc::DOMDocument const* d)
      {
        //Initiate our Singleton as an ACE_TSS object (ensures thread
        //specific storage
        ID_Map::TSS_ID_Map* TSS_ID_Map (ACE_Singleton<ID_Map::TSS_ID_Map, ACE_Null_Mutex>::instance());


        ::XSCRT::XML::Element< ACE_TCHAR > e (d->getDocumentElement ());
        if (e.name () == ACE_TEXT("packageConfiguration"))
        {
          ::DAnCE::Config_Handlers::PackageConfiguration r (e);

          (*TSS_ID_Map)->resolve_idref();

          return r;
        }

        else
        {
          throw 1;
        }
      }
    }

    namespace reader
    {
      ::DAnCE::Config_Handlers::TopLevelPackageDescription
      topLevelPackageDescription (xercesc::DOMDocument const* d)
      {
        //Initiate our Singleton as an ACE_TSS object (ensures thread
        //specific storage
        ID_Map::TSS_ID_Map* TSS_ID_Map (ACE_Singleton<ID_Map::TSS_ID_Map, ACE_Null_Mutex>::instance());


        ::XSCRT::XML::Element< ACE_TCHAR > e (d->getDocumentElement ());
        if (e.name () == ACE_TEXT("topLevelPackageDescription"))
        {
          ::DAnCE::Config_Handlers::TopLevelPackageDescription r (e);

          (*TSS_ID_Map)->resolve_idref();

          return r;
        }

        else
        {
          throw 1;
        }
      }
    }
  }
}

#include "ace/XML_Utils/XMLSchema/TypeInfo.hpp"

namespace DAnCE
{
  namespace Config_Handlers
  {
    namespace
    {
      ::XMLSchema::TypeInfoInitializer < ACE_TCHAR > XMLSchemaTypeInfoInitializer_ (::XSCRT::extended_type_info_map ());
    }
  }
}

namespace DAnCE
{
  namespace Config_Handlers
  {
    namespace Traversal
    {
    }
  }
}

namespace DAnCE
{
  namespace Config_Handlers
  {
    namespace Writer
    {
    }
  }
}

namespace DAnCE
{
  namespace Config_Handlers
  {
    namespace writer
    {
      void
      domain (::DAnCE::Config_Handlers::Domain const& s, xercesc::DOMDocument* d)
      {
        ::XSCRT::XML::Element< ACE_TCHAR > e (d->getDocumentElement ());
        if (e.name () != ACE_TEXT ("domain"))
        {
          throw 1;
        }

        struct W : virtual ::DAnCE::Config_Handlers::Writer::Domain,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::string< ACE_TCHAR >, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::Node,
        virtual ::DAnCE::Config_Handlers::Writer::Interconnect,
        virtual ::DAnCE::Config_Handlers::Writer::Bridge,
        virtual ::DAnCE::Config_Handlers::Writer::Resource,
        virtual ::DAnCE::Config_Handlers::Writer::SatisfierProperty,
        virtual ::DAnCE::Config_Handlers::Writer::SatisfierPropertyKind,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::boolean, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::Any,
        virtual ::DAnCE::Config_Handlers::Writer::DataType,
        virtual ::DAnCE::Config_Handlers::Writer::TCKind,
        virtual ::DAnCE::Config_Handlers::Writer::EnumType,
        virtual ::DAnCE::Config_Handlers::Writer::StructType,
        virtual ::DAnCE::Config_Handlers::Writer::StructMemberType,
        virtual ::DAnCE::Config_Handlers::Writer::ValueType,
        virtual ::DAnCE::Config_Handlers::Writer::ValueMemberType,
        virtual ::DAnCE::Config_Handlers::Writer::SequenceType,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedInt, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::AliasType,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::ID< ACE_TCHAR >, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::DataValue,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::short_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::int_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedShort, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::float_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::double_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedByte, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::long_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedLong, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::NamedValue,
        virtual ::DAnCE::Config_Handlers::Writer::SharedResource,
        virtual ::DAnCE::Config_Handlers::Writer::Property,
        virtual ::XSCRT::Writer< ACE_TCHAR >
        {
          W (::XSCRT::XML::Element< ACE_TCHAR >& e)
          : ::XSCRT::Writer< ACE_TCHAR > (e)
          {
          }
        };

        W w (e);
        w.dispatch (s);
      }
    }

    namespace writer
    {
      void
      DeploymentPlan (::DAnCE::Config_Handlers::deploymentPlan const& s, xercesc::DOMDocument* d)
      {
        ::XSCRT::XML::Element< ACE_TCHAR > e (d->getDocumentElement ());
        if (e.name () != ACE_TEXT ("DeploymentPlan"))
        {
          throw 1;
        }

        struct W : virtual ::DAnCE::Config_Handlers::Writer::deploymentPlan,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::string< ACE_TCHAR >, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentInterfaceDescription,
        virtual ::DAnCE::Config_Handlers::Writer::Property,
        virtual ::DAnCE::Config_Handlers::Writer::Any,
        virtual ::DAnCE::Config_Handlers::Writer::DataType,
        virtual ::DAnCE::Config_Handlers::Writer::TCKind,
        virtual ::DAnCE::Config_Handlers::Writer::EnumType,
        virtual ::DAnCE::Config_Handlers::Writer::StructType,
        virtual ::DAnCE::Config_Handlers::Writer::StructMemberType,
        virtual ::DAnCE::Config_Handlers::Writer::ValueType,
        virtual ::DAnCE::Config_Handlers::Writer::ValueMemberType,
        virtual ::DAnCE::Config_Handlers::Writer::SequenceType,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedInt, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::AliasType,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::ID< ACE_TCHAR >, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::DataValue,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::short_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::int_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedShort, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::float_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::double_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::boolean, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedByte, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::long_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedLong, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::NamedValue,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentPortDescription,
        virtual ::DAnCE::Config_Handlers::Writer::CCMComponentPortKind,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentPropertyDescription,
        virtual ::DAnCE::Config_Handlers::Writer::MonolithicDeploymentDescription,
        virtual ::DAnCE::Config_Handlers::Writer::IdRef,
        virtual ::XMLSchema::Writer::IDREF< ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::Requirement,
        virtual ::DAnCE::Config_Handlers::Writer::InstanceDeploymentDescription,
        virtual ::DAnCE::Config_Handlers::Writer::InstanceResourceDeploymentDescription,
        virtual ::DAnCE::Config_Handlers::Writer::ResourceUsageKind,
        virtual ::DAnCE::Config_Handlers::Writer::PlanConnectionDescription,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentExternalPortEndpoint,
        virtual ::DAnCE::Config_Handlers::Writer::PlanSubcomponentPortEndpoint,
        virtual ::DAnCE::Config_Handlers::Writer::ExternalReferenceEndpoint,
        virtual ::DAnCE::Config_Handlers::Writer::ConnectionResourceDeploymentDescription,
        virtual ::DAnCE::Config_Handlers::Writer::PlanPropertyMapping,
        virtual ::DAnCE::Config_Handlers::Writer::PlanSubcomponentPropertyReference,
        virtual ::DAnCE::Config_Handlers::Writer::ImplementationDependency,
        virtual ::DAnCE::Config_Handlers::Writer::ArtifactDeploymentDescription,
        virtual ::DAnCE::Config_Handlers::Writer::ResourceDeploymentDescription,
        virtual ::DAnCE::Config_Handlers::Writer::PlanLocality,
        virtual ::DAnCE::Config_Handlers::Writer::PlanLocalityKind,
        virtual ::XSCRT::Writer< ACE_TCHAR >
        {
          W (::XSCRT::XML::Element< ACE_TCHAR >& e)
          : ::XSCRT::Writer< ACE_TCHAR > (e)
          {
          }
        };

        W w (e);
        w.dispatch (s);
      }
    }

    namespace writer
    {
      void
      implementationArtifactDescription (::DAnCE::Config_Handlers::ImplementationArtifactDescription const& s, xercesc::DOMDocument* d)
      {
        ::XSCRT::XML::Element< ACE_TCHAR > e (d->getDocumentElement ());
        if (e.name () != ACE_TEXT ("implementationArtifactDescription"))
        {
          throw 1;
        }

        struct W : virtual ::DAnCE::Config_Handlers::Writer::ImplementationArtifactDescription,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::string< ACE_TCHAR >, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::NamedImplementationArtifact,
        virtual ::DAnCE::Config_Handlers::Writer::Property,
        virtual ::DAnCE::Config_Handlers::Writer::Any,
        virtual ::DAnCE::Config_Handlers::Writer::DataType,
        virtual ::DAnCE::Config_Handlers::Writer::TCKind,
        virtual ::DAnCE::Config_Handlers::Writer::EnumType,
        virtual ::DAnCE::Config_Handlers::Writer::StructType,
        virtual ::DAnCE::Config_Handlers::Writer::StructMemberType,
        virtual ::DAnCE::Config_Handlers::Writer::ValueType,
        virtual ::DAnCE::Config_Handlers::Writer::ValueMemberType,
        virtual ::DAnCE::Config_Handlers::Writer::SequenceType,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedInt, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::AliasType,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::ID< ACE_TCHAR >, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::DataValue,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::short_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::int_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedShort, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::float_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::double_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::boolean, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedByte, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::long_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedLong, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::NamedValue,
        virtual ::DAnCE::Config_Handlers::Writer::Requirement,
        virtual ::XSCRT::Writer< ACE_TCHAR >
        {
          W (::XSCRT::XML::Element< ACE_TCHAR >& e)
          : ::XSCRT::Writer< ACE_TCHAR > (e)
          {
          }
        };

        W w (e);
        w.dispatch (s);
      }
    }

    namespace writer
    {
      void
      componentInterfaceDescription (::DAnCE::Config_Handlers::ComponentInterfaceDescription const& s, xercesc::DOMDocument* d)
      {
        ::XSCRT::XML::Element< ACE_TCHAR > e (d->getDocumentElement ());
        if (e.name () != ACE_TEXT ("componentInterfaceDescription"))
        {
          throw 1;
        }

        struct W : virtual ::DAnCE::Config_Handlers::Writer::ComponentInterfaceDescription,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::string< ACE_TCHAR >, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::Property,
        virtual ::DAnCE::Config_Handlers::Writer::Any,
        virtual ::DAnCE::Config_Handlers::Writer::DataType,
        virtual ::DAnCE::Config_Handlers::Writer::TCKind,
        virtual ::DAnCE::Config_Handlers::Writer::EnumType,
        virtual ::DAnCE::Config_Handlers::Writer::StructType,
        virtual ::DAnCE::Config_Handlers::Writer::StructMemberType,
        virtual ::DAnCE::Config_Handlers::Writer::ValueType,
        virtual ::DAnCE::Config_Handlers::Writer::ValueMemberType,
        virtual ::DAnCE::Config_Handlers::Writer::SequenceType,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedInt, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::AliasType,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::ID< ACE_TCHAR >, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::DataValue,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::short_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::int_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedShort, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::float_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::double_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::boolean, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedByte, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::long_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedLong, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::NamedValue,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentPortDescription,
        virtual ::DAnCE::Config_Handlers::Writer::CCMComponentPortKind,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentPropertyDescription,
        virtual ::XSCRT::Writer< ACE_TCHAR >
        {
          W (::XSCRT::XML::Element< ACE_TCHAR >& e)
          : ::XSCRT::Writer< ACE_TCHAR > (e)
          {
          }
        };

        W w (e);
        w.dispatch (s);
      }
    }

    namespace writer
    {
      void
      componentImplementationDescription (::DAnCE::Config_Handlers::ComponentImplementationDescription const& s, xercesc::DOMDocument* d)
      {
        ::XSCRT::XML::Element< ACE_TCHAR > e (d->getDocumentElement ());
        if (e.name () != ACE_TEXT ("componentImplementationDescription"))
        {
          throw 1;
        }

        struct W : virtual ::DAnCE::Config_Handlers::Writer::ComponentImplementationDescription,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::string< ACE_TCHAR >, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentInterfaceDescription,
        virtual ::DAnCE::Config_Handlers::Writer::Property,
        virtual ::DAnCE::Config_Handlers::Writer::Any,
        virtual ::DAnCE::Config_Handlers::Writer::DataType,
        virtual ::DAnCE::Config_Handlers::Writer::TCKind,
        virtual ::DAnCE::Config_Handlers::Writer::EnumType,
        virtual ::DAnCE::Config_Handlers::Writer::StructType,
        virtual ::DAnCE::Config_Handlers::Writer::StructMemberType,
        virtual ::DAnCE::Config_Handlers::Writer::ValueType,
        virtual ::DAnCE::Config_Handlers::Writer::ValueMemberType,
        virtual ::DAnCE::Config_Handlers::Writer::SequenceType,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedInt, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::AliasType,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::ID< ACE_TCHAR >, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::DataValue,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::short_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::int_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedShort, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::float_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::double_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::boolean, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedByte, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::long_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedLong, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::NamedValue,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentPortDescription,
        virtual ::DAnCE::Config_Handlers::Writer::CCMComponentPortKind,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentPropertyDescription,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentAssemblyDescription,
        virtual ::DAnCE::Config_Handlers::Writer::SubcomponentInstantiationDescription,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentPackageDescription,
        virtual ::DAnCE::Config_Handlers::Writer::PackagedComponentImplementation,
        virtual ::DAnCE::Config_Handlers::Writer::PackageConfiguration,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentPackageImport,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentPackageReference,
        virtual ::DAnCE::Config_Handlers::Writer::Requirement,
        virtual ::DAnCE::Config_Handlers::Writer::AssemblyConnectionDescription,
        virtual ::DAnCE::Config_Handlers::Writer::SubcomponentPortEndpoint,
        virtual ::DAnCE::Config_Handlers::Writer::IdRef,
        virtual ::XMLSchema::Writer::IDREF< ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentExternalPortEndpoint,
        virtual ::DAnCE::Config_Handlers::Writer::ExternalReferenceEndpoint,
        virtual ::DAnCE::Config_Handlers::Writer::AssemblyPropertyMapping,
        virtual ::DAnCE::Config_Handlers::Writer::SubcomponentPropertyReference,
        virtual ::DAnCE::Config_Handlers::Writer::Locality,
        virtual ::DAnCE::Config_Handlers::Writer::LocalityKind,
        virtual ::DAnCE::Config_Handlers::Writer::MonolithicImplementationDescription,
        virtual ::DAnCE::Config_Handlers::Writer::ImplementationRequirement,
        virtual ::DAnCE::Config_Handlers::Writer::ResourceUsageKind,
        virtual ::DAnCE::Config_Handlers::Writer::NamedImplementationArtifact,
        virtual ::DAnCE::Config_Handlers::Writer::ImplementationArtifactDescription,
        virtual ::DAnCE::Config_Handlers::Writer::Capability,
        virtual ::DAnCE::Config_Handlers::Writer::SatisfierProperty,
        virtual ::DAnCE::Config_Handlers::Writer::SatisfierPropertyKind,
        virtual ::DAnCE::Config_Handlers::Writer::ImplementationDependency,
        virtual ::XSCRT::Writer< ACE_TCHAR >
        {
          W (::XSCRT::XML::Element< ACE_TCHAR >& e)
          : ::XSCRT::Writer< ACE_TCHAR > (e)
          {
          }
        };

        W w (e);
        w.dispatch (s);
      }
    }

    namespace writer
    {
      void
      componentPackageDescription (::DAnCE::Config_Handlers::ComponentPackageDescription const& s, xercesc::DOMDocument* d)
      {
        ::XSCRT::XML::Element< ACE_TCHAR > e (d->getDocumentElement ());
        if (e.name () != ACE_TEXT ("componentPackageDescription"))
        {
          throw 1;
        }

        struct W : virtual ::DAnCE::Config_Handlers::Writer::ComponentPackageDescription,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::string< ACE_TCHAR >, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentInterfaceDescription,
        virtual ::DAnCE::Config_Handlers::Writer::Property,
        virtual ::DAnCE::Config_Handlers::Writer::Any,
        virtual ::DAnCE::Config_Handlers::Writer::DataType,
        virtual ::DAnCE::Config_Handlers::Writer::TCKind,
        virtual ::DAnCE::Config_Handlers::Writer::EnumType,
        virtual ::DAnCE::Config_Handlers::Writer::StructType,
        virtual ::DAnCE::Config_Handlers::Writer::StructMemberType,
        virtual ::DAnCE::Config_Handlers::Writer::ValueType,
        virtual ::DAnCE::Config_Handlers::Writer::ValueMemberType,
        virtual ::DAnCE::Config_Handlers::Writer::SequenceType,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedInt, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::AliasType,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::ID< ACE_TCHAR >, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::DataValue,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::short_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::int_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedShort, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::float_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::double_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::boolean, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedByte, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::long_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedLong, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::NamedValue,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentPortDescription,
        virtual ::DAnCE::Config_Handlers::Writer::CCMComponentPortKind,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentPropertyDescription,
        virtual ::DAnCE::Config_Handlers::Writer::PackagedComponentImplementation,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentImplementationDescription,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentAssemblyDescription,
        virtual ::DAnCE::Config_Handlers::Writer::SubcomponentInstantiationDescription,
        virtual ::DAnCE::Config_Handlers::Writer::PackageConfiguration,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentPackageImport,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentPackageReference,
        virtual ::DAnCE::Config_Handlers::Writer::Requirement,
        virtual ::DAnCE::Config_Handlers::Writer::AssemblyConnectionDescription,
        virtual ::DAnCE::Config_Handlers::Writer::SubcomponentPortEndpoint,
        virtual ::DAnCE::Config_Handlers::Writer::IdRef,
        virtual ::XMLSchema::Writer::IDREF< ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentExternalPortEndpoint,
        virtual ::DAnCE::Config_Handlers::Writer::ExternalReferenceEndpoint,
        virtual ::DAnCE::Config_Handlers::Writer::AssemblyPropertyMapping,
        virtual ::DAnCE::Config_Handlers::Writer::SubcomponentPropertyReference,
        virtual ::DAnCE::Config_Handlers::Writer::Locality,
        virtual ::DAnCE::Config_Handlers::Writer::LocalityKind,
        virtual ::DAnCE::Config_Handlers::Writer::MonolithicImplementationDescription,
        virtual ::DAnCE::Config_Handlers::Writer::ImplementationRequirement,
        virtual ::DAnCE::Config_Handlers::Writer::ResourceUsageKind,
        virtual ::DAnCE::Config_Handlers::Writer::NamedImplementationArtifact,
        virtual ::DAnCE::Config_Handlers::Writer::ImplementationArtifactDescription,
        virtual ::DAnCE::Config_Handlers::Writer::Capability,
        virtual ::DAnCE::Config_Handlers::Writer::SatisfierProperty,
        virtual ::DAnCE::Config_Handlers::Writer::SatisfierPropertyKind,
        virtual ::DAnCE::Config_Handlers::Writer::ImplementationDependency,
        virtual ::XSCRT::Writer< ACE_TCHAR >
        {
          W (::XSCRT::XML::Element< ACE_TCHAR >& e)
          : ::XSCRT::Writer< ACE_TCHAR > (e)
          {
          }
        };

        W w (e);
        w.dispatch (s);
      }
    }

    namespace writer
    {
      void
      packageConfiguration (::DAnCE::Config_Handlers::PackageConfiguration const& s, xercesc::DOMDocument* d)
      {
        ::XSCRT::XML::Element< ACE_TCHAR > e (d->getDocumentElement ());
        if (e.name () != ACE_TEXT ("packageConfiguration"))
        {
          throw 1;
        }

        struct W : virtual ::DAnCE::Config_Handlers::Writer::PackageConfiguration,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::string< ACE_TCHAR >, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentPackageDescription,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentInterfaceDescription,
        virtual ::DAnCE::Config_Handlers::Writer::Property,
        virtual ::DAnCE::Config_Handlers::Writer::Any,
        virtual ::DAnCE::Config_Handlers::Writer::DataType,
        virtual ::DAnCE::Config_Handlers::Writer::TCKind,
        virtual ::DAnCE::Config_Handlers::Writer::EnumType,
        virtual ::DAnCE::Config_Handlers::Writer::StructType,
        virtual ::DAnCE::Config_Handlers::Writer::StructMemberType,
        virtual ::DAnCE::Config_Handlers::Writer::ValueType,
        virtual ::DAnCE::Config_Handlers::Writer::ValueMemberType,
        virtual ::DAnCE::Config_Handlers::Writer::SequenceType,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedInt, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::AliasType,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::ID< ACE_TCHAR >, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::DataValue,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::short_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::int_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedShort, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::float_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::double_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::boolean, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedByte, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::long_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedLong, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::NamedValue,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentPortDescription,
        virtual ::DAnCE::Config_Handlers::Writer::CCMComponentPortKind,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentPropertyDescription,
        virtual ::DAnCE::Config_Handlers::Writer::PackagedComponentImplementation,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentImplementationDescription,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentAssemblyDescription,
        virtual ::DAnCE::Config_Handlers::Writer::SubcomponentInstantiationDescription,
        virtual ::DAnCE::Config_Handlers::Writer::Requirement,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentPackageReference,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentPackageImport,
        virtual ::DAnCE::Config_Handlers::Writer::AssemblyConnectionDescription,
        virtual ::DAnCE::Config_Handlers::Writer::SubcomponentPortEndpoint,
        virtual ::DAnCE::Config_Handlers::Writer::IdRef,
        virtual ::XMLSchema::Writer::IDREF< ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentExternalPortEndpoint,
        virtual ::DAnCE::Config_Handlers::Writer::ExternalReferenceEndpoint,
        virtual ::DAnCE::Config_Handlers::Writer::AssemblyPropertyMapping,
        virtual ::DAnCE::Config_Handlers::Writer::SubcomponentPropertyReference,
        virtual ::DAnCE::Config_Handlers::Writer::Locality,
        virtual ::DAnCE::Config_Handlers::Writer::LocalityKind,
        virtual ::DAnCE::Config_Handlers::Writer::MonolithicImplementationDescription,
        virtual ::DAnCE::Config_Handlers::Writer::ImplementationRequirement,
        virtual ::DAnCE::Config_Handlers::Writer::ResourceUsageKind,
        virtual ::DAnCE::Config_Handlers::Writer::NamedImplementationArtifact,
        virtual ::DAnCE::Config_Handlers::Writer::ImplementationArtifactDescription,
        virtual ::DAnCE::Config_Handlers::Writer::Capability,
        virtual ::DAnCE::Config_Handlers::Writer::SatisfierProperty,
        virtual ::DAnCE::Config_Handlers::Writer::SatisfierPropertyKind,
        virtual ::DAnCE::Config_Handlers::Writer::ImplementationDependency,
        virtual ::XSCRT::Writer< ACE_TCHAR >
        {
          W (::XSCRT::XML::Element< ACE_TCHAR >& e)
          : ::XSCRT::Writer< ACE_TCHAR > (e)
          {
          }
        };

        W w (e);
        w.dispatch (s);
      }
    }

    namespace writer
    {
      void
      topLevelPackageDescription (::DAnCE::Config_Handlers::TopLevelPackageDescription const& s, xercesc::DOMDocument* d)
      {
        ::XSCRT::XML::Element< ACE_TCHAR > e (d->getDocumentElement ());
        if (e.name () != ACE_TEXT ("topLevelPackageDescription"))
        {
          throw 1;
        }

        struct W : virtual ::DAnCE::Config_Handlers::Writer::TopLevelPackageDescription,
        virtual ::DAnCE::Config_Handlers::Writer::PackageConfiguration,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::string< ACE_TCHAR >, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentPackageDescription,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentInterfaceDescription,
        virtual ::DAnCE::Config_Handlers::Writer::Property,
        virtual ::DAnCE::Config_Handlers::Writer::Any,
        virtual ::DAnCE::Config_Handlers::Writer::DataType,
        virtual ::DAnCE::Config_Handlers::Writer::TCKind,
        virtual ::DAnCE::Config_Handlers::Writer::EnumType,
        virtual ::DAnCE::Config_Handlers::Writer::StructType,
        virtual ::DAnCE::Config_Handlers::Writer::StructMemberType,
        virtual ::DAnCE::Config_Handlers::Writer::ValueType,
        virtual ::DAnCE::Config_Handlers::Writer::ValueMemberType,
        virtual ::DAnCE::Config_Handlers::Writer::SequenceType,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedInt, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::AliasType,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::ID< ACE_TCHAR >, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::DataValue,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::short_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::int_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedShort, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::float_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::double_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::boolean, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedByte, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::long_, ACE_TCHAR >,
        virtual ::XMLSchema::Writer::FundamentalType< ::XMLSchema::unsignedLong, ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::NamedValue,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentPortDescription,
        virtual ::DAnCE::Config_Handlers::Writer::CCMComponentPortKind,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentPropertyDescription,
        virtual ::DAnCE::Config_Handlers::Writer::PackagedComponentImplementation,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentImplementationDescription,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentAssemblyDescription,
        virtual ::DAnCE::Config_Handlers::Writer::SubcomponentInstantiationDescription,
        virtual ::DAnCE::Config_Handlers::Writer::Requirement,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentPackageReference,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentPackageImport,
        virtual ::DAnCE::Config_Handlers::Writer::AssemblyConnectionDescription,
        virtual ::DAnCE::Config_Handlers::Writer::SubcomponentPortEndpoint,
        virtual ::DAnCE::Config_Handlers::Writer::IdRef,
        virtual ::XMLSchema::Writer::IDREF< ACE_TCHAR >,
        virtual ::DAnCE::Config_Handlers::Writer::ComponentExternalPortEndpoint,
        virtual ::DAnCE::Config_Handlers::Writer::ExternalReferenceEndpoint,
        virtual ::DAnCE::Config_Handlers::Writer::AssemblyPropertyMapping,
        virtual ::DAnCE::Config_Handlers::Writer::SubcomponentPropertyReference,
        virtual ::DAnCE::Config_Handlers::Writer::Locality,
        virtual ::DAnCE::Config_Handlers::Writer::LocalityKind,
        virtual ::DAnCE::Config_Handlers::Writer::MonolithicImplementationDescription,
        virtual ::DAnCE::Config_Handlers::Writer::ImplementationRequirement,
        virtual ::DAnCE::Config_Handlers::Writer::ResourceUsageKind,
        virtual ::DAnCE::Config_Handlers::Writer::NamedImplementationArtifact,
        virtual ::DAnCE::Config_Handlers::Writer::ImplementationArtifactDescription,
        virtual ::DAnCE::Config_Handlers::Writer::Capability,
        virtual ::DAnCE::Config_Handlers::Writer::SatisfierProperty,
        virtual ::DAnCE::Config_Handlers::Writer::SatisfierPropertyKind,
        virtual ::DAnCE::Config_Handlers::Writer::ImplementationDependency,
        virtual ::XSCRT::Writer< ACE_TCHAR >
        {
          W (::XSCRT::XML::Element< ACE_TCHAR >& e)
          : ::XSCRT::Writer< ACE_TCHAR > (e)
          {
          }
        };

        W w (e);
        w.dispatch (s);
      }
    }
  }
}

