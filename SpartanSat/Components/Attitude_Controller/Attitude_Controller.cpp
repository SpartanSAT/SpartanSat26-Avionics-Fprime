// ======================================================================
// \title  Attitude_Controller.cpp
// \author thalia
// \brief  cpp file for Attitude_Controller component implementation class
// ======================================================================

#include "SpartanSat/Components/Attitude_Controller/Attitude_Controller.hpp"

namespace SpartanSat {

// ----------------------------------------------------------------------
// Component construction and destruction
// ----------------------------------------------------------------------

Attitude_Controller ::Attitude_Controller(const char* const compName) : Attitude_ControllerComponentBase(compName) {}

Attitude_Controller ::~Attitude_Controller() {}

// ----------------------------------------------------------------------
// Handler implementations for typed input ports
// ----------------------------------------------------------------------

void Attitude_Controller ::run_handler(FwIndexType portNum, U32 context) {
    // TODO
}

// ----------------------------------------------------------------------
// Handler implementations for commands
// ----------------------------------------------------------------------

void Attitude_Controller ::SET_PARAMETER_cmdHandler(FwOpcodeType opCode, U32 cmdSeq, F64 parameter) {
    // TODO
    this->x = parameter;
    this->log_ACTIVITY_HI_update_parameter(parameter);
    this->tlmWrite_parameter(parameter);

    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
}

}  // namespace SpartanSat
