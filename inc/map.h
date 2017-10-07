#ifndef MAP_H_
#define MAP_H_
#include "common_include.h"
namespace myslam
{
	class MapPoint
	{
	public:
		typedef shared_ptr<MapPoint>Ptr;
		unsigned long id_;
		Vector3d pos_;
		Vector3d norm_;
		Mat descriptor_;
		int observed_times_;
		int correct_times_;
		MapPoint();
		MapPoint(long id,Vector3d position,Vector3d norm);
		static MapPoint :: Ptr createMapPoint();
	};
	class Map
	{
	public:
		typedef shared_ptr<Map> Ptr;
		unordered_map<unsigned long, MapPoint::Ptr> map_point_;
		unordered_map<unsigned long, Frame::Ptr> keyframes_;
		Map(){}
		void insertKeyFrame(Frame::Ptr frame);
		void insertMapPoint(MapPoint::Ptr map_point);
	};
}
#endif