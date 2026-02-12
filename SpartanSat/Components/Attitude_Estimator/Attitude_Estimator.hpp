// ======================================================================
// \title  Attitude_Estimator.hpp
// \author thalia
// \brief  hpp file for Attitude_Estimator component implementation class
// ======================================================================

#ifndef SpartanSat_Attitude_Estimator_HPP
#define SpartanSat_Attitude_Estimator_HPP

#include "SpartanSat/Components/Attitude_Estimator/Attitude_EstimatorComponentAc.hpp"

namespace SpartanSat {

class Attitude_Estimator final : public Attitude_EstimatorComponentBase {
  public:
    // ----------------------------------------------------------------------
    // Component construction and destruction
    // ----------------------------------------------------------------------

    //! Construct Attitude_Estimator object
    Attitude_Estimator(const char* const compName  //!< The component name
    );

    //! Destroy Attitude_Estimator object
    ~Attitude_Estimator();
};

}  // namespace SpartanSat

#endif
