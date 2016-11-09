#ifndef NETWORKENUMS_H
#define NETWORKENUMS_H

namespace haste {
namespace network {
    
    enum class CommandFlags : int8_t
    {
        Unreliable = 0x00,
        Reliable = 0x01,
        Encrypted = 0x02,
    };

    enum class CommandType : int8_t
    {
        None = 0,
        Acknowledge = 1,    
        Connect = 2,          
        ConnectResponse = 3, 
        Disconnect = 4,     
        Ping = 5,
        Reliable = 6,
        Unreliable = 7,
        Fragmented = 8,
        SNTP = 14,
    };

     enum class DisconnectReason : int32_t
    {
        None              = 0,
        Timeout           = 0x01,
        ClientDisconnect  = 0x02,
        ServerUserLimit   = 0x03,
        ServerLogic       = 0x04,
        QueueFull         = 0x05,
        InvalidConnection = 0x06,
        InvalidDataFormat = 0x08,
        ApplicationStop   = 0x12,
        ConnectionFailed    = 0x13,
    };

    enum class Lengths : int
    {
        CommandType = 1,
        PeerId = 4,
        SentTime = 8,
        CommandCount = 2,
        Crc = 8,
        MtuHeader = CommandType + PeerId + SentTime + CommandCount + Crc,

        Type = 1,
        Channel = 1,
        Flags = 1,
        Size = 2,
        ReliableSequenceNumber = 8,
        UnreliableSequenceNumber = 8,

        StartSequenceNumber = 8,
        FragmentCount = 2,
        FragmentNumber = 2,
        TotalLength = 4,
        FragmentOffset = 4,

        AckReceivedReliableSequenceNumber = 8,
        AckReceivedSentTime = 8,

        MiniumHeader = Type + Channel + Flags + Size + ReliableSequenceNumber,
        ReliableHeader = MiniumHeader,
        
        ConnectHeader = ReliableHeader,
        VerifyConnectHeader = ReliableHeader,
        AcknowledgeHeader = MiniumHeader,

        PingHeader = ReliableHeader,
        DisconnectHeader = MiniumHeader,
        SntpHeader = ReliableHeader,
        UnreliableHeader = ReliableHeader + UnreliableSequenceNumber,
        FragmentHeader = ReliableHeader + StartSequenceNumber + FragmentCount + FragmentNumber + TotalLength + FragmentOffset,
    }

    enum class SocketState : int32_t
    {
        None = 0,
        Connecting,
        Connected,
        Disconnecting,
        Disconnected,
    };

    enum class MtuSize : int16_t
    {
        MinimumMtu = 476,
        DefaulTMtu = 1350,
        MaximumMtu = 3096,
    };

    enum class PeerID
    {
        MinimumPeerId = 0,
        MaximumPeerId = int.MaxValue
    };

} //namespace network {
} //namespace haste {

#endif /* NETWORKENUMS_H */
