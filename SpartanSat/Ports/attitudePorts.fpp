# reference:
# https://nasa.github.io/fpp/fpp-users-guide.html#Defining-Ports
#

module SpartanSat {
  @ example port
  port examplePort(
    val1: F32 @< values carried by port
    val2: F32 
  )
  
  port Attitude_Port(
    val1: F64 @< using 64 bit floats to maintain best precision
    val2: F64
    val3: F64
  )

}