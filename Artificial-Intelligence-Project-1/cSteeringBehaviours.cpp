#include "cSteeringBehaviours.h"

cSteeringBehaviours::cSteeringBehaviours() {

}

cSteeringBehaviours::~cSteeringBehaviours() {

}

glm::vec3 cSteeringBehaviours::Face(glm::vec3 objectPosition, glm::vec3 targetPosition, glm::vec3 targetLookAt) {
	glm::vec3 target = glm::normalize(targetPosition - objectPosition);
	glm::vec3 facingDirection = glm::normalize(glm::mix(targetLookAt, target, 0.1f));
	return facingDirection;
}

glm::vec3 cSteeringBehaviours::Seek(glm::vec3 objectPosition, glm::vec3 targetPosition, glm::vec3 targetLookAt) {
	return glm::vec3(0);
}