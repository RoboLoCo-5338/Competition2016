/*
 * DriveTrain.cpp
 *
 *  Created on: Jan 17, 2016
 *      Author: RoboLoCo
 */

#include <DriveTrain.h>

DriveTrain::DriveTrain(std::shared_ptr<SpeedController> left1,
		std::shared_ptr<SpeedController> left2,
		std::shared_ptr<SpeedController> right1,
		std::shared_ptr<SpeedController> right2) {
	Left1 = left1;
	Left2 = left2;
	Right1 = right1;
	Right2 = right2;
}

void DriveTrain::Set(double left, double right) {
	Left1.get()->Set(left);
	Left2.get()->Set(left);
	Right1.get()->Set(right);
	Right2.get()->Set(right);
}

void DriveTrain::SetPoint(double offset) {
	LeftEnc.get()->
}

void Loop() {
	switch (case)
}
