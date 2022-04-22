/******************************************************************************
 * Spine Runtimes License Agreement
 * Last updated January 1, 2020. Replaces all prior versions.
 *
 * Copyright (c) 2013-2020, Esoteric Software LLC
 *
 * Integration of the Spine Runtimes into software or otherwise creating
 * derivative works of the Spine Runtimes is permitted under the terms and
 * conditions of Section 2 of the Spine Editor License Agreement:
 * http://esotericsoftware.com/spine-editor-license
 *
 * Otherwise, it is permitted to integrate the Spine Runtimes into software
 * or otherwise create derivative works of the Spine Runtimes (collectively,
 * "Products"), provided that each user of the Products must obtain their own
 * Spine Editor license and redistribution of the Products in any form must
 * include this license and copyright notice.
 *
 * THE SPINE RUNTIMES ARE PROVIDED BY ESOTERIC SOFTWARE LLC "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL ESOTERIC SOFTWARE LLC BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES,
 * BUSINESS INTERRUPTION, OR LOSS OF USE, DATA, OR PROFITS) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THE SPINE RUNTIMES, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *****************************************************************************/

#ifndef GODOT_SPINETRANSFORMCONSTRAINT_H
#define GODOT_SPINETRANSFORMCONSTRAINT_H

#include "SpineCommon.h"
#include "SpineTransformConstraintData.h"
#include "SpineBone.h"
#include <spine/TransformConstraint.h>

class SpineTransformConstraint : public REFCOUNTED {
	GDCLASS(SpineTransformConstraint, REFCOUNTED);

protected:
	static void _bind_methods();

private:
	spine::TransformConstraint *transform_constraint;

public:
	SpineTransformConstraint();

	void set_spine_object(spine::TransformConstraint *tc) { transform_constraint = tc; }
	spine::TransformConstraint *get_spine_object() { return transform_constraint; }

	void update();

	int get_order();

	Ref<SpineTransformConstraintData> get_data();

	Array get_bones();

	Ref<SpineBone> get_target();

	void set_target(Ref<SpineBone> v);

	float get_mix_rotate();

	void set_mix_rotate(float v);

	float get_mix_x();

	void set_mix_x(float v);

	float get_mix_y();

	void set_mix_y(float v);

	float get_mix_scale_x();

	void set_mix_scale_x(float v);

	float get_mix_scale_y();

	void set_mix_scale_y(float v);

	float get_mix_shear_y();

	void set_mix_shear_y(float v);

	bool is_active();

	void set_active(bool v);
};

#endif//GODOT_SPINETRANSFORMCONSTRAINT_H