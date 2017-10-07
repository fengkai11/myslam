#ifndef COMMON_INCLUDE_H_
#define COMMON_INCLUDE_H_
#include <Eigen/Core>
#include <Eigen/Geometry>
using Eigen::Vector2d;
using Eigen::Vector3d;

#include <sophus/se3.h>
using Sophus::SE3;

#include <opencv2/core/core.hpp>
using cv::Mat;
#include <vector>
#include <list>
#include <map>
#include <memory>
#include <string>
#include <set>
#include <iostream>
#include <unordered_map>

using namespace std;
#endif