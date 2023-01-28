#pragma once

#include <glm/glm.hpp>
#include "cMeshInfo.h"

class cSteeringBehaviours {
public:
	cSteeringBehaviours();
	~cSteeringBehaviours();

	glm::vec3 Face(glm::vec3 objectPosition, glm::vec3 targetPosition, glm::vec3 targetLookAt);
	glm::vec3 Seek(glm::vec3 objectPosition, glm::vec3 targetPosition, glm::vec3 targetLookAt);
};