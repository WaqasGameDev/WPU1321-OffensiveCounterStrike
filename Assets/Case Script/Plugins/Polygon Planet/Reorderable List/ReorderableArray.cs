//Poylgon Planet - Contact. https://polygonplanet.com/contact/
//Copyright � 2016-2018 Polygon Planet. All rights reserved. https://polygonplanet.com/privacy-policy/
//This source file is subject to Unity Technologies Asset Store Terms of Service. https://unity3d.com/legal/as_terms

#pragma warning disable 0168 //Variable declared, but not used.
#pragma warning disable 0219 //Variable assigned, but not used.
#pragma warning disable 0414 //Private field assigned, but not used.
#pragma warning disable 0649 //Variable asisgned to, and will always have default value.

using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;

namespace PolygonPlanet.ReorderableList
{
	[Serializable]
	public abstract class ReorderableArray<T> : ICloneable, IList<T>, ICollection<T>, IEnumerable<T>
    {
		[SerializeField]
		private List<T> array = new List<T>();

		public ReorderableArray(): this(0)
        {
		}

		public ReorderableArray(int length)
        {
			array = new List<T>(length);
		}

		public T this[int index]
        {
			get { return array[index]; }
			set { array[index] = value; }
		}

        public bool IsReadOnly
        {
            get { return false; }
        }

        public int Count
        {
            get { return array.Count; }
        }

        public int Length
        {		
			get { return array.Count; }
		}

        public void Insert(int index, T item)
        {
            array.Insert(index, item);
        }

        public void Clear()
        {
            array.Clear();
        }

        public void Add(T item)
        {
            array.Add(item);
        }

        public bool Remove(T item)
        {
            return array.Remove(item);
        }

        public void RemoveAt(int index)
        {
            array.RemoveAt(index);
        }

		public object Clone()
        {
			return new List<T>(array);
		}

		public void CopyFrom(IEnumerable<T> value)
        {
			array.Clear();
			array.AddRange(value);
		}

        public void CopyTo(T[] array, int arrayIndex)
        {
            this.array.CopyTo(array, arrayIndex);
        }

        public T[] ToArray()
        {
            return array.ToArray();
        }

        public bool Contains(T value)
        {
			return array.Contains(value);
		}

		public int IndexOf(T value)
        {
			return array.IndexOf(value);
		}

		public IEnumerator<T> GetEnumerator()
        {
			return array.GetEnumerator();
		}

		IEnumerator IEnumerable.GetEnumerator()
        {
			return array.GetEnumerator();
		}
	}
}