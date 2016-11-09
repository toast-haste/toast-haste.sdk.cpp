#ifndef NETWORKCONNECT_H
#define NETWORKCONNECT_H

namespace haste {

class NetworkConnnect{

public:
	NetworkConnnect();
	~NetworkConnnect();

	void Connect(string ip, int16_t port);
private:
	shared_ptr<HastePeer> _peer;
};

} //namespace haste {

#endif /* NETWORKCONNECT_H */
