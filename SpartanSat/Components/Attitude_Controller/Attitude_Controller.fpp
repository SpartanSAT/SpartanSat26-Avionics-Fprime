module SpartanSat {
    @ controller for cubesat attitude, sends commands to actuators (reaction wheels/magnetorquers)
    active component Attitude_Controller {

        # One async command/port is required for active components
        # This should be overridden by the developers with a useful command/port
        @ TODO
        #async command TODO opcode 0

        ##############################################################################
        #### Uncomment the following examples to start customizing your component ####
        ##############################################################################

        # @ Example async command
        # async command COMMAND_NAME(param_name: U32)
        async command SET_PARAMETER(parameter: F64)

        # @ Example telemetry counter
        # telemetry ExampleCounter: U64
        telemetry parameter: F64

        telemetry quaternion_i: F64
        telemetry quaternion_j: F64
        telemetry quaternion_k: F64
        #telemetry quaternion_w: F64

        # @ Example event
        # event ExampleStateEvent(example_state: Fw.On) severity activity high id 0 format "State set to {}"
        event update_parameter(
            parameter:F64
        ) severity activity high id 0 format "parameter changed to {}"

        # @ Example port: receiving calls from the rate group
        sync input port run: Svc.Sched

        # @ Example parameter
        # param PARAMETER_NAME: U32

        ###############################################################################
        # Standard AC Ports: Required for Channels, Events, Commands, and Parameters  #
        ###############################################################################
        @ Port for requesting the current time
        time get port timeCaller

        @ Enables command handling
        import Fw.Command

        @ Enables event handling
        import Fw.Event

        @ Enables telemetry channels handling
        import Fw.Channel

        @ Port to return the value of a parameter
        param get port prmGetOut

        @Port to set the value of a parameter
        param set port prmSetOut

    }
}