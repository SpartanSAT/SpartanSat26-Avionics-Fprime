// ======================================================================
// \title  IMU_Driver.cpp
// \author thalia
// \brief  cpp file for IMU_Driver component implementation class
// ======================================================================

#include "SpartanSat/Components/IMU_Driver/IMU_Driver.hpp"

namespace SpartanSat {

// ----------------------------------------------------------------------
// Component construction and destruction
// ----------------------------------------------------------------------

IMU_Driver ::IMU_Driver(const char* const compName) : IMU_DriverComponentBase(compName) {}

IMU_Driver ::~IMU_Driver() {}

// ----------------------------------------------------------------------
// Handler implementations for typed input ports
// ----------------------------------------------------------------------

void IMU_Driver ::TODO_handler(FwIndexType portNum, U32 context) {
    // TODO
}

}  // namespace SpartanSat
