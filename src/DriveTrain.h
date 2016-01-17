/*
 * DriveTrain.h
 *
 *  Created on: Jan 17, 2016
 *      Author: RoboLoCo
 */

#ifndef SRC_DRIVETRAIN_H_
#define SRC_DRIVETRAIN_H_

class DriveTrain {
public:
	DriveTrain(std::shared_ptr<SpeedController> left1,
			std::shared_ptr<SpeedController> left2,
			std::shared_ptr<SpeedController> right1,
			std::shared_ptr<SpeedController> right2,
			std::shared_ptr<Encoder> leftEnc,
			std::shared_ptr<Encoder> rightEnc);
	void Set(double left, double right);
	void SetPoint(double offset);
private:
	std::shared_ptr<SpeedController> Left1;
	std::shared_ptr<SpeedController> Left2;
	std::shared_ptr<SpeedController> Right1;
	std::shared_ptr<SpeedController> Right2;
	std::shared_ptr<Encoder> LeftEnc;
	std::shared_ptr<Encoder> RightEnc;
	double LeftErrorInt = 0;
	double RightErrorInt = 0;
	double LeftError = 0;
	double RightError = 0;
	double LeftdError = 0;
	double RightdError = 0;
	double TargetL = 0;
	double TargetR = 0;
};

#endif /* SRC_DRIVETRAIN_H_ */
