// ======================================================================
// \title  IMU_Driver.hpp
// \author thalia
// \brief  hpp file for IMU_Driver component implementation class
// ======================================================================

#ifndef SpartanSat_IMU_Driver_HPP
#define SpartanSat_IMU_Driver_HPP

#include "SpartanSat/Components/IMU_Driver/IMU_DriverComponentAc.hpp"

namespace SpartanSat {

class IMU_Driver final : public IMU_DriverComponentBase {
  public:
    // ----------------------------------------------------------------------
    // Component construction and destruction
    // ----------------------------------------------------------------------

    //! Construct IMU_Driver object
    IMU_Driver(const char* const compName  //!< The component name
    );

    //! Destroy IMU_Driver object
    ~IMU_Driver();

  private:
    // ----------------------------------------------------------------------
    // Handler implementations for typed input ports
    // ----------------------------------------------------------------------

    //! Handler implementation for TODO
    //!
    //! TODO
    void TODO_handler(FwIndexType portNum,  //!< The port number
                      U32 context           //!< The call order
                      ) override;
};

}  // namespace SpartanSat

#endif
