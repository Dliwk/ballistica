// Released under the MIT License. See LICENSE for details.

#ifndef BALLISTICA_GRAPHICS_MESH_MESH_BUFFER_VERTEX_SMOKE_FULL_H_
#define BALLISTICA_GRAPHICS_MESH_MESH_BUFFER_VERTEX_SMOKE_FULL_H_

#include "ballistica/graphics/mesh/mesh_buffer.h"

namespace ballistica {

// just make this a vanilla child class of our template
// (simply so we could predeclare this)
class MeshBufferVertexSmokeFull : public MeshBuffer<VertexSmokeFull> {
  using MeshBuffer::MeshBuffer;
};

}  // namespace ballistica

#endif  // BALLISTICA_GRAPHICS_MESH_MESH_BUFFER_VERTEX_SMOKE_FULL_H_
