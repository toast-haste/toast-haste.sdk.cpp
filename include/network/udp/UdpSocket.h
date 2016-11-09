#ifndef UDPSOCKET_H
#define UDPSOCKET_H

namespace haste {
namespace network {
namespace udp {

	class UdpSocket
	{
	public:
		UdpSocket();
		~UdpSocket();
		
		UdpSocket(const UdpSocket&) = delete;
		UdpSocket operator=(const UdpSocket&) = delete;
	};

} //namespace udp {
} //namespace network {
} //namespace haste {

#endif /* UDPSOCKET_H */
