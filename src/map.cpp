#include "map.h"
namespace myslam
{
	MapPoint :: MapPoint():id(-1)
	{}
	MapPoint :: MapPoint(long id, Vector3d position, Vector3d norm) :
	id_(id), position_(position),norm_(norm)
	{}
	MapPoint :: Ptr MapPoint :: createMapPoint()
	{
		static long factory_id = 0;
		return MapPoint :: Ptr(new MapPoint(factory_id++));
	}
	void Map::insertKeyFrame(Frame::Ptr frame)
	{
		cout<<"key frame size = "<<keyframes_size()<<endl;
		if(keyframes_.find(frame->id_) = keyframes_.end())
		{
			keyframes_insert(make_pair(frame->id_,frame));
		}
		else
		{
			keyframes_[frame->id_]=frame;
		}
	}
	void Map::insertMapPoint(MapPoint::Ptr map_point)
	{
		if(map_points_.find(map_point->id_)==map_points_.end())
		{
			map_points_.insert(make_pair(map_point->id_,map_point))
		}
		else
		{
			map_points_[map_point->id_]=map_point;
		}
	}	


}