/**
    For conditions of distribution and use, see copyright notice in LICENSE

    @file   OgreModuleFwd.h
    @brief  Forward declarations for commonly used OgreRenderingModule and Ogre classes. */

#pragma once

#include "CoreTypes.h"

namespace Ogre
{
    class Entity;
    class Mesh;
    class Node;
    class SceneNode;
    class Camera;
    class ManualObject;
    class Light;
    class Root;
    class SceneManager;
    class RenderWindow;
    class RaySceneQuery;
    class Viewport;
    class RenderTexture;
    class DefaultHardwareBufferManager;
    class ParticleSystem;
    class Skeleton;
    class TagPoint;
    class MaterialPtr;
    class BillboardSet;
    class Billboard;
    class Bone;
    class InstancedEntity;
    class InstanceManager;
}

typedef shared_ptr<Ogre::Root> OgreRootPtr;

/// @todo Remove OgreRenderer namespace.
namespace OgreRenderer
{
    class OgreRenderingModule;
    class OgreRenderSystemListener;
    class Renderer;
    typedef shared_ptr<Renderer> RendererPtr;
    typedef weak_ptr<Renderer> RendererWeakPtr;
}

using OgreRenderer::OgreRenderingModule;
typedef OgreRenderer::RendererPtr OgreRendererPtr;
typedef OgreRenderer::RendererWeakPtr OgreRendererWeakPtr;

class OgreCompositionHandler;
class GaussianListener;
class OgreWorld;
class UiPlane;
class RenderWindow;

class TextureAsset;
class OgreMeshAsset;
class OgreMaterialAsset;
class OgreSkeletonAsset;
class OgreParticleAsset;

typedef shared_ptr<TextureAsset> TextureAssetPtr;
Q_DECLARE_METATYPE(TextureAssetPtr)
typedef shared_ptr<OgreMeshAsset> OgreMeshAssetPtr;
Q_DECLARE_METATYPE(OgreMeshAssetPtr)
typedef shared_ptr<OgreMaterialAsset> OgreMaterialAssetPtr;
Q_DECLARE_METATYPE(OgreMaterialAssetPtr)
typedef shared_ptr<OgreSkeletonAsset> OgreSkeletonAssetPtr;
Q_DECLARE_METATYPE(OgreSkeletonAssetPtr)
typedef shared_ptr<OgreParticleAsset> OgreParticleAssetPtr;
Q_DECLARE_METATYPE(OgreParticleAssetPtr)

class EC_AnimationController;
class EC_Camera;
class EC_Light;
class EC_Material;
class EC_Mesh;
class EC_OgreCompositor;
class EC_Placeable;
class EC_RttTarget;
class EC_Billboard;
class EC_ParticleSystem;
class EC_Sky;
class EC_EnvironmentLight;
class EC_Fog;

typedef shared_ptr<OgreWorld> OgreWorldPtr;
typedef weak_ptr<OgreWorld> OgreWorldWeakPtr;
