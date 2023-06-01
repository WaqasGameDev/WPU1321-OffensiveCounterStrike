using UnityEditor;
using UnityEngine;

namespace Lovatto.LayoutCustomizer
{
    public class LayoutCustomizerWelcome : EditorWindow
    {
        public const string AssetName = "UI Layout Customizer";
        private static readonly Vector2 windowSize = new Vector2(256, 128);

        /// <summary>
        ///
        /// </summary>
        private void OnEnable()
        {
            titleContent = new GUIContent(AssetName);
        }

        /// <summary>
        ///
        /// </summary>
        private void OnGUI()
        {
            GUILayout.FlexibleSpace();
            GUILayout.BeginVertical("box");
            GUIStyle gs = EditorStyles.helpBox;
            gs.richText = true;
            GUILayout.Label(($"Thanks for use <b>{AssetName}</b>, \n for get started and documentation please check this:").ToUpper(), gs);
            GUILayout.EndVertical();
            GUILayout.FlexibleSpace();
            if (GUILayout.Button("DOCUMENTATION", GUILayout.Height(40)))
            {
                GetWindow<LayoutCustomizerDocumentation>();
                this.Close();
            }
            GUILayout.FlexibleSpace();
        }

        public static void Open()
        {
            var cr = Screen.currentResolution;
            GetWindowWithRect<LayoutCustomizerWelcome>(new Rect((cr.width * 0.5f) - (windowSize.x * 0.5f), (cr.height * 0.5f) - (windowSize.y * 0.5f), windowSize.x, windowSize.y), true);
        }

        [InitializeOnLoadMethod]
        private static void Init()
        {
            string assetKey = $"lovatto.asset.{AssetName}.init";
            if (PlayerPrefs.HasKey(assetKey))
            {
                return;
            }

            PlayerPrefs.SetInt(assetKey, 1);
            Open();
        }
    }
}