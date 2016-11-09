#ifndef UDPPEER_H
#define UDPPEER_H

namespace haste {
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
} //namespace haste {


#endif /* UDPPEER_H */
