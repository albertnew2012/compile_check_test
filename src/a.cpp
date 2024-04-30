#include <fstream>
#include <string>
#include <experimental/filesystem>
// #include <pcl/io/pcd_io.h>
// #include "pointpillars.h"
#include <boost/filesystem.hpp>

namespace fs = std::experimental::filesystem;
const std::string bbox_suffice = "_boxes_lidar.txt"; 
const std::string score_suffice = "_score.txt";
const std::string labels_suffice = "_pred_labels.txt";
