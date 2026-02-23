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

    //! Handler implementation for command TODO
    //!
    //! TODO
    void TODO_cmdHandler(FwOpcodeType opCode,  //!< The opcode
                         U32 cmdSeq            //!< The command sequence number
                         ) override;
};

}  // namespace SpartanSat

#endif
