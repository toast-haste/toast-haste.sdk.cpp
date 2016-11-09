#ifndef TCPPEER_H
#define TCPPEER_H

namespace haste {
namespace network {
namespace tcp {

	class TcpPeer
	{
	public:
		TcpPeer();
		~TcpPeer();
		
		TcpPeer(const TcpPeer&) = delete;
		TcpPeer operator=(const TcpPeer&) = delete;
	};

} //namespace tcp {
} //namespace network {
} //namespace haste {

#endif /* TCPPEER_H */
