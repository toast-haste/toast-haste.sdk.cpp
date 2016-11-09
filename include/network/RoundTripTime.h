#ifndef ROUNDTRIPTIME_H
#define ROUNDTRIPTIME_H

namespace haste {
namespace network {

	class RoundTripTime
	{
	public:
		RoundTripTime();
		~RoundTripTime();
		
		RoundTripTime(const RoundTripTime&) = delete;
		RoundTripTime operator=(const RoundTripTime&) = delete;
	};

} //namespace network {
} //namespace haste {

#endif /* ROUNDTRIPTIME_H */
