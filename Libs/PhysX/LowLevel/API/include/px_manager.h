#ifndef PXD_MANAGER_H
#define PXD_MANAGER_H

#include "px_config.h"
#include "px_geometry.h"
#include "px_task.h"

#ifdef __cplusplus
extern "C"
{
#endif

/*!
\file
Manager interface
*/

/************************************************************************/
/* Managers                                                             */
/************************************************************************/

typedef PxdHandle PxdManager;

/*!
Manager types. 
*/
typedef enum PxdManagerType_
{
	/*!
	No valid manager type
	*/
	PXD_MANAGER_TYPE_NONE = 0,
	/*!
	Contact managers are used for generating contact constraints
	between two derived shapes.
	*/
	PXD_MANAGER_TYPE_CONTACT = 1,
	/*!
	Fluid contact managers are used for generating contact constraints
	between a derived fluid and a derived shape.
	*/
	PXD_MANAGER_TYPE_FLUID_BODY_CONTACT = 2,
	/*!
	Used for fluid simulation. NOT IMPLEMENTED
	*/
	PXD_MANAGER_TYPE_CONNECTIVITY
} PxdManagerType;


/*!
Return value from PXD_MANAGER_STATUS property
*/
typedef enum PxdContactManagerStatus_
{
	PXD_MANAGER_STATUS_NON_CONTACT,
	PXD_MANAGER_STATUS_CONTACT
} PxdContactManagerStatus;

/*!
Report struct for change in contact manager status
*/
typedef struct PxdContactManagerStatusChange_
{
	/*!
	Manager handle
	*/
	PxdManager manager;

	/*!
	Manager userdata
	*/
	void* userData;
} PxdContactManagerStatusChange;

/*!
Manager properties
*/
typedef enum PxdManagerProperty_
{
	/*!
	Flag to determine whether this manager should report the
	generated constraints or not (1 PxInt - flag). 
	Immutable after manager creation.
	*/
	PXD_MANAGER_CONTACT_REPORT_INFO,
	/*!
	Flag to determine if contact constraints report impulses or not.
	(1 PxInt - flag).

	This flag implies PXD_MANAGER_CONTACT_REPORT_INFO.

	Immutable after manager creation.
	*/
	PXD_MANAGER_CONTACT_REPORT_IMPULSE,
	/*!
	Flag to determine whether this manager have changeable contact 
	constraints. (1 PxInt - flag).

	This flag implies PXD_MANAGER_CONTACT_REPORT_INFO.

	Immutable after manager creation.
	*/
	PXD_MANAGER_CONTACT_CHANGEABLE,
	/*!
	Specify the relative transform between the shapes. This
	transform is added in addition to any other transform that
	the shapes might already have. (1 PxdTransform)
	*/
	PXD_MANAGER_RELATIVE_TRANSFORM,
	/*!
	Used for reading back contact managers status
	(1 pxContactManagerStatus, read-only)
	*/
	PXD_MANAGER_STATUS,
	/*!
	Used for reading back constraint count generated by this
	manager. (1 PxUInt, read-only)
	*/
	PXD_MANAGER_CONSTRAINT_COUNT,
	/*!
	Used for reading back constraint identifiers generated by this
	manager. (n pxConstraint, where n equals number returned by 
	PXD_MANAGER_CONSTRAINT_COUNT)
	*/
	PXD_MANAGER_CONSTRAINTS,
	/*!
	Set the maximum number of constraints to be generated by this manager.
	(1 PxUInt)
	*/
	PXD_MANAGER_MAX_CONSTRAINTS,
	/*!
	Set the static friction value of a contact manager (1 PxFloat)
	*/
	PXD_MANAGER_STATIC_FRICTION,
	/*!
	Set the dynamic friction value of a contact manager (1 PxFloat)
	*/
	PXD_MANAGER_DYNAMIC_FRICTION,
	/*!
	Set the restitution value of a contact manager (1 PxFloat)
	*/
	PXD_MANAGER_RESTITUTION,
	/*!
	Set the skin width of a contact manager (max distance of wanted interpenetration) (1 PxFloat)
	*/
	PXD_MANAGER_SKINWIDTH,
	/*!
	Set the correlation distance for contact correlation (1 PxFloat)
	*/
	PXD_MANAGER_CORRELATION_DISTANCE,
	/*!
	Manager user data (void*)
	*/
	PXD_MANAGER_USER_DATA,
	/*!
	Used to set if manager should emit contact points into the solver
	or not. Default is response enabled. (1 PxUInt - flag, read-only)
	*/
	PXD_MANAGER_DISABLE_RESPONSE,
	
	
	/*!
	Constraint dominance.  Use PxdManagerSetFloat(), PxdManagerGetFloat() to manipulate.
	A dominance of 0 means the corresp. body will 
	not be pushable by the other body in the constraint.	
	Only value pairs (1.0f, 1.0f)<this is the default>, (0.0f, 1.0f), (1.0f, 0.0f) are permitted for the time being.
	*/
	PXD_MANAGER_DOMINANCE0,
	/*!
	Constraint dominance.  Use PxdManagerSetFloat(), PxdManagerGetFloat() to manipulate.
	A dominance of 0 means the corresp. body will 
	not be pushable by the other body in the constraint.	
	Only value pairs (1.0f, 1.0f)<this is the default>, (0.0f, 1.0f), (1.0f, 0.0f) are permitted for the time being.
	*/
	PXD_MANAGER_DOMINANCE1,
	/*!
	Used to mark the rigid body which is colliding with a fluid as a drain.
	Default is no drain. (1 PxUInt - flag)
	*/
	PXD_MANAGER_FLUID_IS_DRAIN
} PxdManagerProperty;


/*!
Manager descriptor
*/
typedef struct PxdManagerDesc_
{
	/*!
	Type of manager

	\sa PxdManagerType
	*/
	PxdManagerType type;

	/*!
	Manager user data

	\sa PXD_MANAGER_USER_DATA
	*/
	void* userData;

	union
	{
		/*!
		Parameters for manager of type PXD_MANAGER_TYPE_CONTACT
		*/
		struct
		{
			/*!
			First shape identifier. Should be of type PXD_SHAPE_TYPE_BODY
			*/
			PxdShape	shape0;

			/*!
			Second shape identifier. Should be of type PXD_SHAPE_TYPE_BODY
			*/
			PxdShape	shape1;

			/*!
			Static friction coefficient.

			\sa PXD_MANAGER_STATIC_FRICTION
			*/
			PxFloat		staticFriction;

			/*!
			Dynamic friction coefficient

			\sa PXD_MANAGER_DYNAMIC_FRICTION
			*/
			PxFloat		dynamicFriction;

			/*!
			Restitution coefficient

			\sa PXD_MANAGER_RESTITUTION
			*/
			PxFloat		restitution;

			/*!
			Maximum number of constraints this contact manager is allowed
			to generate.

			\sa PXD_MANAGER_MAX_CONSTRAINTS
			*/
			PxInt		maxConstraints;

			/*!
			Enable contact information reporting.

			\sa PXD_MANAGER_CONTACT_REPORT_INFO
			*/
			PxInt		reportContactInfo;

			/*!
			Enable contact impulse reporting.

			\sa PXD_MANAGER_CONTACT_REPORT_IMPULSE
			*/
			PxInt		reportContactImpulse;

			/*!
			Enable generated contacts to be changeable

			\sa PXD_MANAGER_CONTACT_CHANGEABLE
			*/
			PxInt		contactChangeable;

			/*!
			Contact resolution skin-width

			\sa PXD_MANAGER_SKINWIDTH
			*/
			PxFloat		skinWidth;

			/*!
			Distance for contact correlation

			\sa PXD_MANAGER_CORRELATION_DISTANCE
			*/
			PxFloat		correlationDistance;

			/*!
			Disable contact response

			\sa PXD_MANAGER_DISABLE_RESPONSE
			*/
			PxInt		disableResponse;
			/*!
			Dominance setting for one way interactions.
			A dominance of 0 means the corresp. body will 
			not be pushable by the other body in the constraint.
			\sa PXD_MANAGER_DOMINANCE0
			*/
			PxFloat		dominance0;
			
			/*!
			Dominance setting for one way interactions.
			A dominance of 0 means the corresp. body will 
			not be pushable by the other body in the constraint.
			\sa PXD_MANAGER_DOMINANCE1
			*/
			PxFloat 	dominance1;
		} contact;
	};
} PxdManagerDesc;


/*!
Manager descriptor for collisions between fluids and rigid bodies
*/
typedef struct PxdManagerDescFluidBody_
{
	/*!
	Type of manager

	\sa PxdManagerType
	*/
	PxdManagerType type;

	/*!
	Manager user data

	\sa PXD_MANAGER_USER_DATA
	*/
	void* userData;

	/*!
	First shape identifier. Should be of type PXD_SHAPE_TYPE_FLUID
	*/
	PxdShape	shape0;

	/*!
	Second shape identifier. Should be of type PXD_SHAPE_TYPE_BODY
	*/
	PxdShape	shape1;

	/*!
	Mark body as fluid drain.
	*/
    PxInt		isDrain;
} PxdManagerDescFluidBody;


/*!
Initialize manager descriptor
*/
PXD_EXPORT_FUNCTION void PxdManagerInitDesc(PxdManagerDesc* desc);

/*!
Initialize manager descriptor
*/
PXD_EXPORT_FUNCTION void PxdFluidBodyManagerInitDesc(PxdManagerDescFluidBody* desc);

/*!
Create manager
\param type
Manager type identifier. This cannot be changed afterwards.
\param shape0
First shape
\param shape1
Second shape
\return
Manager identifier. Zero on failure.
*/
PXD_EXPORT_FUNCTION PxdManager PxdManagerCreate(PxdContext context, PxdManagerDesc* desc);

/*!
Create manager
\param context
The low level context in which to create the manager.
\param desc
Manager descriptor data structure
\return
Manager identifier. Zero on failure.
*/
PXD_EXPORT_FUNCTION PxdManager PxdFluidBodyManagerCreate(PxdContext context, PxdManagerDescFluidBody* desc);

/*!
Destroy manager
\param manager
Manager identifier
*/
PXD_EXPORT_FUNCTION void PxdManagerDestroy(PxdManager manager);

/*!
Return the manager type for a specific manager
\param manager
Manager identifier
\return
Manager type identifier. Zero if shape identifier is invalid.
*/
PXD_EXPORT_FUNCTION PxdManagerType PxdManagerGetType(PxdManager manager);

/*!
Return the shapes used by a specific manager
\param manager
Manager identifier
\param shape0
Pointer to first shape. The first shape identifier will be filled in here.
\param shape1
Pointer to second shape. The second shape identifier will be filled in here.
*/
PXD_EXPORT_FUNCTION void PxdManagerGetShapes(PxdManager manager, PxdShape* shape0, PxdShape* shape1);


/*!
Return the touch status of a manager
\param manager
Manager identifier
*/

PXD_EXPORT_FUNCTION PxdContactManagerStatus PxdManagerGetState(PxdManager manager);

/*!
Get the number of new status change reports of given type (touch/no touch).
Only valid to call after a successful broad phase update until the beginnig 
of next update.

\param context
Context identifier
\param newTouch
Pointer to memory location getting number of new touches
\param lostTouch
Pointer to memory location getting number of lost touches
\return
Returns true on success
*/
PXD_EXPORT_FUNCTION PxBool PxdManagerGetStatusChangeCount(PxdContext context, PxInt* newTouch, PxInt* lostTouch);

/*!
Get the status change reports of given type (touch/no touch).
The caller is responsible for allocating a buffer for overlaps of sufficient
size to fit at least the number of overlaps reported by 
PxdManagerGetStatusChangeCount.

\param context
Context identifier
\param newTouch
Buffer to be filled with new touch information
\param lostTouch
Buffer to be filled with lost touch information
\return
Returns true on successful filling of the buffer, false on error.
*/
PXD_EXPORT_FUNCTION PxBool PxdManagerGetStatusChange(PxdContext context, PxdContactManagerStatusChange* newTouch, PxdContactManagerStatusChange* lostTouch);



/*!
Return the number of contacts present in a manager
\param manager
Manager identifier
*/

PXD_EXPORT_FUNCTION PxUInt PxdManagerGetConstraintCount(PxdManager manager);

/*!
Activate a Manager
\param manager
Manager identifier
*/
PXD_EXPORT_FUNCTION void PxdManagerActivate(PxdManager manager);

/*!
Deactivate a Manager
\param manager
Manager identifier
*/
PXD_EXPORT_FUNCTION void PxdManagerDeactivate(PxdManager manager);

/*!
Map the hardware mesh page corresponding to a body atom
\param manager
Manager identifier
\param shape
Body shape corresponding to the mapped page
\return zero if the manager corresponding to the mapped page could not be created, either because
it already exists or for space reasons.
*/
PXD_EXPORT_FUNCTION PxInt PxdManagerMapPage(PxdManager manager, PxdShape shape);
/*!
Unmap the hardware mesh page corresponding to a body atom
\param manager
\param shape
Body shape corresponding to the mapped page
*/
PXD_EXPORT_FUNCTION void PxdManagerUnmapPage(PxdManager manager, PxdShape shape);


/*!
Test whether a manager is active
\param manager
Manager identifier
*/
PXD_EXPORT_FUNCTION PxInt PxdManagerIsActive(PxdManager manager);



/*!
Return the constraints from a manager
\param manager
Manager identifier
\param constraints
The buffer into which the constraints will be rendered. The buffer should be large enough to hold the number
of constraints in the manager.
*/

PXD_EXPORT_FUNCTION void PxdManagerGetConstraints(PxdManager manager, PxdConstraint* constraints);

/*!
\addtogroup Manager property set/get
@{
*/
PXD_EXPORT_FUNCTION void PxdManagerSetFloat(PxdManager manager, PxdManagerProperty property, PxFloat value);
PXD_EXPORT_FUNCTION PxFloat PxdManagerGetFloat(PxdManager manager, PxdManagerProperty property);

PXD_EXPORT_FUNCTION void PxdManagerSetInt(PxdManager manager, PxdManagerProperty property, PxInt value);
PXD_EXPORT_FUNCTION PxInt PxdManagerGetInt(PxdManager manager, PxdManagerProperty property);

PXD_EXPORT_FUNCTION void PxdManagerSetProperty(PxdManager manager, PxdManagerProperty property, void* data, size_t size);
PXD_EXPORT_FUNCTION void PxdManagerGetProperty(PxdManager manager, PxdManagerProperty property, void* data, size_t size);

PXD_EXPORT_FUNCTION void PxdManagerSetVec(PxdManager Manager, PxdManagerProperty property, PxdVector v);
PXD_EXPORT_FUNCTION PxdVector PxdManagerGetVec(PxdManager Manager, PxdManagerProperty property);

PXD_EXPORT_FUNCTION void PxdManagerSetQuat(PxdManager Manager, PxdManagerProperty property, PxdQuaternion q);
PXD_EXPORT_FUNCTION PxdQuaternion PxdManagerGetQuat(PxdManager Manager, PxdManagerProperty property);

PXD_EXPORT_FUNCTION void PxdManagerSetTransform(PxdManager Manager, PxdManagerProperty property, PxdTransform t);
PXD_EXPORT_FUNCTION PxdTransform PxdManagerGetTransform(PxdManager Manager, PxdManagerProperty property);


/*!
@}
*/


/************************************************************************/
/* Manager control                                                      */
/************************************************************************/

/*!
Allocate task identifier for updating the managers.
After this task has fully executed, constraints have been added
to the solver, and lists of constraints may be retrieved from
the contact managers.
*/
PXD_EXPORT_FUNCTION PxdTask PxdManagerUpdate(PxdContext context, PxFloat dt);

#ifdef __cplusplus
}
#endif

#endif
