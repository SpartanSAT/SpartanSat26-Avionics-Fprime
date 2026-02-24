// ======================================================================
// \title  Attitude_Controller.hpp
// \author thalia
// \brief  hpp file for Attitude_Controller component implementation class
// ======================================================================

#ifndef SpartanSat_Attitude_Controller_HPP
#define SpartanSat_Attitude_Controller_HPP

#include "SpartanSat/Components/Attitude_Controller/Attitude_ControllerComponentAc.hpp"

namespace SpartanSat {

class Attitude_Controller final : public Attitude_ControllerComponentBase {
  F64 x = 0;
  public:
    // ----------------------------------------------------------------------
    // Component construction and destruction
    // ----------------------------------------------------------------------

    //! Construct Attitude_Controller object
    Attitude_Controller(const char* const compName  //!< The component name
    );

    //! Destroy Attitude_Controller object
    ~Attitude_Controller();

  private:
    // ----------------------------------------------------------------------
    // Handler implementations for commands
    // ----------------------------------------------------------------------

    //! Handler implementation for command SET_PARAMETER
    //!
    //! TODO
    void SET_PARAMETER_cmdHandler(FwOpcodeType opCode,  //!< The opcode
                                  U32 cmdSeq,           //!< The command sequence number
                                  F64 parameter) override;

    // ----------------------------------------------------------------------
    // Handler implementations for typed input ports
    // ----------------------------------------------------------------------

    //! Handler implementation for run
    void run_handler(FwIndexType portNum,  //!< The port number
                     U32 context           //!< The call order
                     ) override;
};

}  // namespace SpartanSat

#endif
