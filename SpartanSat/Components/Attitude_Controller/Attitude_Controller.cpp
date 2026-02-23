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
// Handler implementations for commands
// ----------------------------------------------------------------------

void Attitude_Controller ::TODO_cmdHandler(FwOpcodeType opCode, U32 cmdSeq) {
    // TODO
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
}

}  // namespace SpartanSat
