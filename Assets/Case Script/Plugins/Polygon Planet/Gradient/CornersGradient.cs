//Poylgon Planet - Contact. https://polygonplanet.com/contact/
//Copyright © 2016-2018 Polygon Planet. All rights reserved. https://polygonplanet.com/privacy-policy/
//This source file is subject to Unity Technologies Asset Store Terms of Service. https://unity3d.com/legal/as_terms

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

using UnityEngine;
using UnityEngine.UI;

namespace PolygonPlanet.Gradient
{
    [AddComponentMenu("UI/Effects/Corners Gradient")]
    public class CornersGradient : BaseMeshEffect
    {
        [Header("Variables")]
        public Color topLeftColor;
        public Color topRightColor;
        public Color bottomLeftColor;
        public Color bottomRightColor;

        public override void ModifyMesh(VertexHelper vertextHelper)
        {
            if (enabled == true)
            {
                Rect rect = graphic.rectTransform.rect;
                GradientUtils.Matrix2x3 localPositionMatrix = GradientUtils.LocalPositionMatrix(rect, Vector2.right);
                UIVertex uiVertex = default(UIVertex);

                for (int i = 0; i < vertextHelper.currentVertCount; i++)
                {
                    vertextHelper.PopulateUIVertex(ref uiVertex, i);
                    Vector2 normalizedPosition = localPositionMatrix * uiVertex.position;
                    uiVertex.color *= GradientUtils.Bilerp(bottomLeftColor, bottomRightColor, topLeftColor, topRightColor, normalizedPosition);
                    vertextHelper.SetUIVertex(uiVertex, i);
                }
            }
        }
    }
}