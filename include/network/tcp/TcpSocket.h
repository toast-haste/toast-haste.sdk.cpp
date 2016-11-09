#ifndef TCPSOCKET_H
#define TCPSOCKET_H

namespace haste {
namespace network {
namespace tcp {

	class TcpSocket
	{
	public:
		TcpSocket();
		~TcpSocket();
		
		TcpSocket(const TcpSocket&) = delete;
		TcpSocket operator=(const TcpSocket&) = delete;
	};

} //namespace tcp {
} //namespace network {
} //namespace haste {


#endif /* TCPSOCKET_H */
