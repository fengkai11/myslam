#ifndef FRAME_H_
#define FRAME_H_
namespace myslam
{
	class Frame
	{
	public:
		typedef std::shared_ptr<Frame> Ptr;
		unsigned long id_;
		double time_stamp_;
		SE3 T_c_w_;
		Camera::Ptr camera_;
		Mat color_,depth_;
	public:
		Frame();
		Frame(long id, double time_stamp = 0,SE3 T_c_w = SE3(), Camera::Ptr camera = nullptr, Mat color = Mat(), Mat depth = Mat());
		~Frame();

		//factory function
		static Frame :: Ptr createFrame();

		double findDepth(const cv:: KeyPoint& kp);
		Vector3d getCamCenter() const;
		bool isInFrame(const Vector3d& ptr_world);
	}
}
#endif