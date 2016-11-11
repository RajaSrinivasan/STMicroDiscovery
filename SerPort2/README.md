Bouncer Program:

In this example, we use USART2:

    TX - PA2          - Channel 6 in the trace shown
    RX - PA3          - Channel 7 in the trace shown
    
Every second a message of 2 bytes is transmitted. The TX line then looks like:

TX
    - First byte - increasing sequence number maintained by this micro
    - Second byte - a number received from the partner. Same as what comes in on the RX channel

The partner program (Beacon) just sends out a decreasing number every second.
