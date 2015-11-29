
#include <rp/repository.hpp>
//#include <rp/processor.hpp>
#include <rp/enumerations/enumregistry.hpp>
//#include <qlo/enumerations/register/register_all.hpp>
//#include <qlo/serialization/serializationfactory.hpp>
#include "qlo/init.hpp"
#include <iostream>//DELETEME

extern "C" __declspec(dllexport) void __stdcall qlInitializeAddin() {
    try {
        std::cout << "BEGIN - FUNCTION 'qlInitializeAddin'" << std::endl;

        // Instantiate the reposit Repository
        static reposit::Repository repository;

        ////Instantiate the Processor Factory
        ////static reposit::ProcessorFactory processorFactory;

        //// Instantiate the Serialization Factory
        ////static QuantLibAddin::SerializationFactory factory;

        // Instantiate the Enumerated Type Registry
        static reposit::EnumTypeRegistry enumTypeRegistry;

        // Instantiate the Enumerated Class Registry
        static reposit::EnumClassRegistry enumClassRegistry;

        // Instantiate the Enumerated Pair Registry
        static reposit::EnumPairRegistry enumPairRegistry;

        // Initialize the Enumeration Registry
        QuantLibAddin::initializeAddin();

        std::cout << "END   - FUNCTION 'qlInitializeAddin'" << std::endl;

    } catch (const std::exception &e) {
        std::cout << "ERROR - FUNCTION 'qlInitializeAddin' - " << e.what() << std::endl;
        // BEGIN typemap rp_tm_csh_rtex std::string
        return;
        // END   typemap rp_tm_csh_rtex
    } catch (...) {
        std::cout << "ERROR - FUNCTION 'qlInitializeAddin' - UNKNOWN EXCEPTION" << std::endl;
        // BEGIN typemap rp_tm_csh_rtex std::string
        return;
        // END   typemap rp_tm_csh_rtex
    }
}

extern "C" __declspec(dllexport) void qlReleaseMemoryInt(int* p)
{
    try {
        std::cout << "BEGIN - FUNCTION 'qlReleaseMemoryInt'" << std::endl;
        delete[] p;
        std::cout << "END   - FUNCTION 'qlReleaseMemoryInt'" << std::endl;
    } catch (const std::exception &e) {
        std::cout << "ERROR - FUNCTION 'qlReleaseMemoryInt' - " << e.what() << std::endl;
        // BEGIN typemap rp_tm_csh_rtex std::string
        return;
        // END   typemap rp_tm_csh_rtex
    } catch (...) {
        std::cout << "ERROR - FUNCTION 'qlReleaseMemoryInt' - UNKNOWN EXCEPTION" << std::endl;
        // BEGIN typemap rp_tm_csh_rtex std::string
        return;
        // END   typemap rp_tm_csh_rtex
    }
}

extern "C" __declspec(dllexport) void qlReleaseMemoryDbl(double* p)
{
    try {
        std::cout << "BEGIN - FUNCTION 'qlReleaseMemoryDbl'" << std::endl;
        delete[] p;
        std::cout << "END   - FUNCTION 'qlReleaseMemoryDbl'" << std::endl;
    } catch (const std::exception &e) {
        std::cout << "ERROR - FUNCTION 'qlReleaseMemoryDbl' - " << e.what() << std::endl;
        // BEGIN typemap rp_tm_csh_rtex std::string
        return;
        // END   typemap rp_tm_csh_rtex
    } catch (...) {
        std::cout << "ERROR - FUNCTION 'qlReleaseMemoryDbl' - UNKNOWN EXCEPTION" << std::endl;
        // BEGIN typemap rp_tm_csh_rtex std::string
        return;
        // END   typemap rp_tm_csh_rtex
    }
}

