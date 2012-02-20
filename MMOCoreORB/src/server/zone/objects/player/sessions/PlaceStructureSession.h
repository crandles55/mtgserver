/*
 *	server/zone/objects/player/sessions/PlaceStructureSession.h generated by engine3 IDL compiler 0.60
 */

#ifndef PLACESTRUCTURESESSION_H_
#define PLACESTRUCTURESESSION_H_

#include "engine/core/Core.h"

#include "engine/core/ManagedReference.h"

#include "engine/core/ManagedWeakReference.h"

namespace server {
namespace zone {
namespace objects {
namespace creature {

class CreatureObject;

} // namespace creature
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::creature;

namespace server {
namespace zone {
namespace objects {
namespace scene {

class SceneObject;

} // namespace scene
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::scene;

namespace server {
namespace zone {
namespace objects {
namespace tangible {
namespace deed {
namespace structure {

class StructureDeed;

} // namespace structure
} // namespace deed
} // namespace tangible
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::tangible::deed::structure;

namespace server {
namespace zone {
namespace managers {
namespace planet {

class PlanetManager;

} // namespace planet
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::planet;

namespace server {
namespace zone {
namespace managers {
namespace structure {

class StructureManager;

} // namespace structure
} // namespace managers
} // namespace zone
} // namespace server

using namespace server::zone::managers::structure;

namespace server {
namespace zone {

class Zone;

} // namespace zone
} // namespace server

using namespace server::zone;

namespace server {
namespace zone {
namespace objects {
namespace area {

class ActiveArea;

} // namespace area
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::area;

#include "server/zone/objects/scene/SessionFacadeType.h"

#include "engine/util/Facade.h"

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {

class PlaceStructureSession : public Facade {
public:
	PlaceStructureSession(CreatureObject* creature, StructureDeed* deed);

	int initializeSession();

	int constructStructure(float x, float y, int angle);

	int completeSession();

	int cancelSession();

	int clearSession();

	DistributedObjectServant* _getImplementation();

	void _setImplementation(DistributedObjectServant* servant);

protected:
	PlaceStructureSession(DummyConstructorParameter* param);

	virtual ~PlaceStructureSession();

	friend class PlaceStructureSessionHelper;
};

} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions;

namespace server {
namespace zone {
namespace objects {
namespace player {
namespace sessions {

class PlaceStructureSessionImplementation : public FacadeImplementation {
protected:
	ManagedReference<CreatureObject* > creatureObject;

	ManagedReference<StructureDeed* > deedObject;

	float positionX;

	float positionY;

	int directionAngle;

	ManagedReference<SceneObject* > constructionBarricade;

	ManagedReference<Zone* > zone;

public:
	PlaceStructureSessionImplementation(CreatureObject* creature, StructureDeed* deed);

	PlaceStructureSessionImplementation(DummyConstructorParameter* param);

	int initializeSession();

	int constructStructure(float x, float y, int angle);

	int completeSession();

	int cancelSession();

	int clearSession();

	WeakReference<PlaceStructureSession*> _this;

	operator const PlaceStructureSession*();

	DistributedObjectStub* _getStub();
	virtual void readObject(ObjectInputStream* stream);
	virtual void writeObject(ObjectOutputStream* stream);
protected:
	virtual ~PlaceStructureSessionImplementation();

	void finalize();

	void _initializeImplementation();

	void _setStub(DistributedObjectStub* stub);

	void lock(bool doLock = true);

	void lock(ManagedObject* obj);

	void rlock(bool doLock = true);

	void wlock(bool doLock = true);

	void wlock(ManagedObject* obj);

	void unlock(bool doLock = true);

	void runlock(bool doLock = true);

	void _serializationHelperMethod();
	bool readObjectMember(ObjectInputStream* stream, const String& name);
	int writeObjectMembers(ObjectOutputStream* stream);

	friend class PlaceStructureSession;
};

class PlaceStructureSessionAdapter : public FacadeAdapter {
public:
	PlaceStructureSessionAdapter(PlaceStructureSession* impl);

	Packet* invokeMethod(sys::uint32 methid, DistributedMethod* method);

	int initializeSession();

	int constructStructure(float x, float y, int angle);

	int completeSession();

	int cancelSession();

	int clearSession();

};

class PlaceStructureSessionHelper : public DistributedObjectClassHelper, public Singleton<PlaceStructureSessionHelper> {
	static PlaceStructureSessionHelper* staticInitializer;

public:
	PlaceStructureSessionHelper();

	void finalizeHelper();

	DistributedObject* instantiateObject();

	DistributedObjectServant* instantiateServant();

	DistributedObjectAdapter* createAdapter(DistributedObjectStub* obj);

	friend class Singleton<PlaceStructureSessionHelper>;
};

} // namespace sessions
} // namespace player
} // namespace objects
} // namespace zone
} // namespace server

using namespace server::zone::objects::player::sessions;

#endif /*PLACESTRUCTURESESSION_H_*/
