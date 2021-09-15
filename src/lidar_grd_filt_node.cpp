//
// Created by adam on 18-9-21.
//Modified by VVK
//

#include "lidar_grd_filt_core.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "lidar_grd_filt");

    ros::NodeHandle nh;

    PclTestCore core(nh);
    // core.Spin();
    return 0;
}