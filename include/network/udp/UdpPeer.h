#ifndef UDPPEER_H
#define UDPPEER_H

namespace haste {
namespace network {
namespace udp {

	class UdpPeer
	{
	public:
		UdpPeer();
		~UdpPeer();
		
		UdpPeer(const UdpPeer&) = delete;
		UdpPeer operator=(const UdpPeer&) = delete;
	};

} //namespace udp {
} //namespace network {
} //namespace haste {


#endif /* UDPPEER_H */
